import random
from operator import itemgetter
import rclpy
from rclpy.node import Node
from functools import partial

from msgs_control.srv import SimPID


class SimPIDClientNode(Node):

    def __init__(self):
        super().__init__('sim_pid_client_sync')

        self.client = self.create_client(SimPID, '/serv/sim_pid')

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn('Waiting for SimPID service...')

        self.Fitness = 0
        self.values=[]
        self.w = (10, 0.1, 10, 0.5) # weight of ts, d, overshot, ess - w = [15., .4, 3., 10.] # paper #1 (cruise control) self.w = (15., .6, 6., 10.)
        self.Population_Quality=[]
        self.Elitismo=True
        self.Elite_List=[]
        self.RangoGen = [[],[]]     

        population_size = 100
        chromosome_length = 3
        generations = 200
        mutation_rate = 0.1
        crossover_rate = 0.6

        best_chromosome = self.genetic_algorithm(population_size, chromosome_length, generations, mutation_rate, crossover_rate)
        self.get_logger().info(f'best gen={best_chromosome[0]}')

    def call_sim_pid_server(self, kp, ki, kd):
        request = SimPID.Request()
        request.kp = kp
        request.ki = ki
        request.kd = kd

        future = self.client.call_async(request)

        rclpy.spin_until_future_complete(self, future)

        try:
            response = future.result()

            self.get_logger().info(
                f'PID(kp={kp}, ki={ki}, kd={kd}) -> '
                f'overshoot={response.overshoot:.3f}, '
                f'd={response.d:.3f}, '
                f'ess={response.ess:.3f}, '
                f'ts={response.ts:.3f}'
            )
            return response
        except Exception as e:
            self.get_logger().error(f'Service call failed: {e}')

    def evaluate(self, chromosome):
        # Aquí debes implementar la evaluación del cromosoma y retornar un valor de fitness
        response = self.call_sim_pid_server(kp=chromosome[0], ki=chromosome[1], kd=chromosome[2])
        fitness=Fitness = 1 / 1 + self.w[0]*abs(response.ts)+ self.w[1]*abs(response.d)+ self.w[2]*abs(response.overshoot)+ self.w[3]*abs(response.ess)
        return fitness

    # Generar un cromosoma aleatorio
    def generate_random_chromosome(self, length):  
        chromosome = []
        for _ in range(length):
            gene = random.uniform(0.0, 10.0)  # Generar número aleatorio en el rango [0.0, 10.0]
            chromosome.append(gene)            
        return chromosome

    # Cruzar dos cromosomas
    def crossover(self, chromosome1, chromosome2, crossover_rate):
        new_chromosome=chromosome1
        if random.random() < crossover_rate:
            crossover_point = random.randint(1, len(chromosome1) - 1)
            new_chromosome = chromosome1[:crossover_point] + chromosome2[crossover_point:]
        return new_chromosome
        
    # Mutar un cromosoma
    def mutate(self, chromosome, mutation_rate):
        mutated_chromosome = []
        for gene in chromosome:
            if random.random() < mutation_rate:
                mutated_gene = random.uniform(0.0, 10.0)  # Generar número aleatorio en el rango [0.0, 5.0]
            else:
                mutated_gene = gene
            mutated_chromosome.append(mutated_gene)
        return mutated_chromosome

    #selección por torneo
    def selection_tournament(self, population_size, evaluated_population, T):
            parents = []            
            while len(parents) < population_size:
                candidates=[]
                for ite in range(T):
                    candidates.append(random.choice(evaluated_population))                            
                parents.append(min(candidates, key=itemgetter(1))[0])
            return parents
    
    # Algoritmo genético
    def genetic_algorithm(self, population_size, chromosome_length, generations, mutation_rate, crossover_rate):
        population = []
        for _ in range(population_size):
            chromosome = self.generate_random_chromosome(chromosome_length)
            population.append(chromosome)
       
        for generation in range(generations):            
            # Evaluación de la población
            evaluated_population = [(chromosome, self.evaluate(chromosome)) for chromosome in population]

            # Selección de padres mediante torneo de longitud T
            parents = []
            T=8 # Se seleccionan 8 cromosomas de manera aleatoria pra el torneo. Nos quedaremos con el de menor función de fitness
            parents = self.selection_tournament(population_size, evaluated_population, T)

            # Cruzamiento y mutación para generar descendencia
            offspring = []
            for i in range(0, population_size, 2):
                parent1 = parents[i]
                parent2 = parents[i + 1]
                child1 = self.crossover(parent1, parent2, crossover_rate)
                child2 = self.crossover(parent2, parent1, crossover_rate)
                mutated_child1 = self.mutate(child1, mutation_rate)
                mutated_child2 = self.mutate(child2, mutation_rate)
                offspring.extend([mutated_child1, mutated_child2])

            # Reemplazar la población anterior con la descendencia
            population = offspring
        best_chromosome = min(evaluated_population, key=lambda x: x[1])#[0]
        return best_chromosome        

def main(args=None):
    rclpy.init(args=args)
    node = SimPIDClientNode()
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
