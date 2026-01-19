import numpy as np
import statistics as stat


class Performance:    
    def __init__(self):
        self.Overshoot = 0.0
        self.d = 0.0
        self.Ess = 0.0
        self.Ts = 0.0
        self.v = []
        self.VR = 0.0

    def Init(self, velocidades, Velocidad_de_referencia):
        self.Overshoot = 0.0
        self.d = 0.0
        self.Ess = 0.0
        self.Ts = 0.0
        self.v = velocidades
        self.VR = Velocidad_de_referencia
        
    def Calcula_indexes(self):
       # We assign the stable speed as the mean of the last 30 values
        vel_estable = sum(self.v[-30:]) / 30

        # We define the stabilization error as the difference between the stable speed and the reference speed
        self.Ess = vel_estable - self.VR

        # This code activates a flag once the first maximum over the stable speed has been found, and stores that speed as the overshoot
        # Due to the extreme value theorem, in a closed interval of a continuous function, between two maximums there must be at least 
        # one minimum, so we use this to ensure that we are registering the next maximum that goes over the threshold after a minimum
        # to compute the decay value. Once this is done, we can exit the loop
        
        found_overshoot = False
        A = 0

        for i in range(1, len(self.v) - 1):
            if self.v[i - 1] < self.v[i] > self.v[i + 1] and self.v[i] > vel_estable:
                if not found_overshoot:
                    A = self.v[i] - vel_estable
                    self.Overshoot = A/vel_estable
                    found_overshoot = True
                else:
                    self.d = (self.v[i] - vel_estable) / A 
                    break

        # We assign the threshold as a 1% variation respective to the stable speed
        threshold = 0.01 * vel_estable

        # We will traverse the speed list and activate a flag that indicates that the speed is within the threshold if it is. 
        # If the flag is not activated, this means the previous values were not within the threshold, this way we will store the
        # first value within threshold while the next ones are also within the threshold. Otherwise, the value will be updated
        
        inThreshold = False
        
        for i, vel in enumerate(self.v):
            if abs(vel-vel_estable) < threshold:
                if not isThreshold:
                    self.Ts = i
                isThreshold = True
            else:
                isThreshold = False

        # If the last value was not within the threshold, this means that we did not reach stabilization
        # We will note that with the length of the velocity list + 1, but it could potentially be described in other ways
        # such as with a flag
        if not isThreshold:
            self.Ts = len(self.v) + 1

        self.Ts = self.Ts * 30 / 320
  
        return self.Overshoot, self.d, self.Ess, self.Ts
