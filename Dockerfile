FROM osrf/ros:humble-desktop-jammy

# Install deps
RUN apt update && apt install -y \
    python3-colcon-common-extensions \
    python3-rosdep \
    && rm -rf /var/lib/apt/lists/*

# Set workspace
WORKDIR /ros2_ws
COPY ./src ./src
# Build your code
RUN . /opt/ros/humble/setup.sh && \
    rosdep update && rosdep install --from-paths src --ignore-src -r -y && \
    colcon build
# Default launch command
ENTRYPOINT ["/bin/bash"]