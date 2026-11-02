
FROM osrf/ros:humble-desktop-full

SHELL ["/bin/bash", "-exo", "pipefail", "-c"]

# Disable interactive prompts during apt installs
ARG DEBIAN_FRONTEND=noninteractive

# Install GPU graphics drivers
RUN apt-get update && apt-get upgrade -y && \
    apt-get install -y \
        mesa-utils \
        software-properties-common && \
    add-apt-repository -y ppa:kisak/turtle && \
    apt-get update && apt-get upgrade -y

# System and ROS 2 dependencies
RUN apt-get update && apt-get install -y \
    nano \
    curl \
    sudo \
    build-essential \
    cmake \
    clang-format \
    git \
    python3-pip \
    libeigen3-dev \
    ros-humble-orocos-kdl-vendor \
    ros-humble-kdl-parser \
    liborocos-kdl-dev \
    ros-humble-moveit \
    ros-humble-ros2-control \
    ros-humble-ros2-controllers \
    ros-humble-ign-ros2-control \
    ros-humble-controller-interface \
    ros-humble-control-msgs \
    ros-humble-gazebo-ros-pkgs \
    ros-humble-ros-gz \
    ros-humble-gazebo-ros2-control \
    ros-humble-effort-controllers \
    ros-humble-plotjuggler-ros \
    python3-colcon-common-extensions \
    && rm -rf /var/lib/apt/lists/*

# Python dependencies
RUN pip3 install numpy matplotlib

# matplotlib-cpp for plotting
RUN mkdir -p /usr/local/include/matplotlibcpp && \
    curl -fsSL \
        https://raw.githubusercontent.com/lava/matplotlib-cpp/master/matplotlibcpp.h \
        -o /usr/local/include/matplotlibcpp/matplotlibcpp.h

# Create a generic non-root ROS development user
ARG USERNAME=ros
ARG USER_UID=1000
ARG USER_GID=1000

RUN groupadd --gid ${USER_GID} ${USERNAME} && \
    useradd \
        --uid ${USER_UID} \
        --gid ${USER_GID} \
        --create-home \
        --shell /bin/bash \
        ${USERNAME} && \
    echo "${USERNAME} ALL=(ALL) NOPASSWD:ALL" \
        > /etc/sudoers.d/${USERNAME} && \
    chmod 0440 /etc/sudoers.d/${USERNAME}

# Configure the ROS 2 workspace
RUN mkdir -p /workspace && \
    chown ${USERNAME}:${USERNAME} /workspace

# Configure shell environment
RUN echo 'source /opt/ros/humble/setup.bash' \
        >> /home/${USERNAME}/.bashrc && \
    echo '[ -f /workspace/install/setup.bash ] && source /workspace/install/setup.bash' \
        >> /home/${USERNAME}/.bashrc

# Install container entrypoint
COPY --chmod=755 .devcontainer/entrypoint.sh /entrypoint.sh

# Run as the generic ROS user
USER ${USERNAME}

WORKDIR /workspace

ENTRYPOINT ["/entrypoint.sh"]
CMD ["bash"]
