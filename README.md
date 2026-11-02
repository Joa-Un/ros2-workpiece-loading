# Autonomous Workpiece Loading and Alignment Simulation
Final demo for Advanced Robotics course 
# Development Environment Setup.  

This project uses **ROS 2 Humble, Gazebo, and Docker** to develop and simulate an autonomous workpiece loading system.

The Docker environment includes the required ROS 2 packages and development tools, so ROS 2 does not need to be installed directly on your computer.

The instructions below cover **Ubuntu Linux** and **Windows with WSL2**.

## 1. Prerequisites

Install the following software:

- [Docker Engine](https://docs.docker.com/engine/install/ubuntu/) and [Docker Compose](https://docs.docker.com/compose/install/linux/) for Ubuntu.
- [WSL2](https://learn.microsoft.com/en-us/windows/wsl/install) and [Docker Desktop](https://docs.docker.com/desktop/setup/install/windows-install/) for Windows.
- [Visual Studio Code](https://code.visualstudio.com/).
- The **Dev Containers** extension for VS Code.
- The **WSL** extension for VS Code (Windows only).

### Windows configuration

In Docker Desktop:

1. Enable the WSL2 backend under **Settings → General**.
2. Enable integration with your Ubuntu distribution under **Settings → Resources → WSL Integration**.

Clone the repository inside the WSL Linux filesystem (for example, `~/`), not under `/mnt/c/`.

### Ubuntu configuration

For Gazebo and RViz GUI support, allow local Docker containers to access the X11 display:

```bash
xhost +si:localuser:root
```

Use this only in a trusted development environment.

If your user cannot run Docker commands without `sudo`, follow the [Docker post-installation instructions](https://docs.docker.com/engine/install/linux-postinstall/).

### NVIDIA GPUs

On native Ubuntu, install the [NVIDIA Container Toolkit](https://docs.nvidia.com/datacenter/cloud-native/container-toolkit/latest/install-guide.html) and configure Docker GPU support.

On Windows with WSL2, ensure Docker Desktop and compatible NVIDIA Windows drivers are installed.

If you do not have an NVIDIA GPU, use the standard container configuration.

## 2. Clone the repository

Open an Ubuntu or WSL terminal:

```bash
cd ~
git clone https://github.com/YOUR_USERNAME/ros2-workpiece-loading.git
cd ros2-workpiece-loading
```

Replace `YOUR_USERNAME` with the repository owner's GitHub username.

## 3. Start the development container

### Option A: VS Code (recommended)

Open the project:

```bash
code .
```

In VS Code:

1. Press **Ctrl + Shift + P**.
2. Select **Dev Containers: Reopen in Container** or **Rebuild and Reopen in Container**.
3. Choose the configuration matching your operating system and GPU:

| System | Configuration |
|---|---|
| Ubuntu | `workpiece_loading_devcontainer` |
| Ubuntu + NVIDIA | `workpiece_loading_devcontainer_nvidia` |
| Windows / WSL2 | `workpiece_loading_devcontainer_wsl` |
| Windows / WSL2 + NVIDIA | `workpiece_loading_devcontainer_wsl_nvidia` |

The first build may take several minutes because Docker needs to install the required dependencies.

After startup, VS Code runs inside the container.

### Option B: Terminal

You can also start the container without VS Code.

#### Ubuntu

```bash
cd .devcontainer
docker compose up -d --build
docker compose exec workpiece_loading bash
```

#### Ubuntu + NVIDIA

```bash
cd .devcontainer
docker compose -f docker-compose.yml -f docker-compose.nvidia.yml up -d --build
docker compose -f docker-compose.yml -f docker-compose.nvidia.yml exec workpiece_loading bash
```

#### Windows / WSL2

```bash
cd .devcontainer/wsl
docker compose -f docker-compose.wsl.yml up -d --build
docker compose -f docker-compose.wsl.yml exec workpiece_loading bash
```

#### Windows / WSL2 + NVIDIA

```bash
cd .devcontainer/wsl
docker compose -f docker-compose.wsl.yml -f docker-compose.wsl.nvidia.yml up -d --build
docker compose -f docker-compose.wsl.yml -f docker-compose.wsl.nvidia.yml exec workpiece_loading bash
```

To exit the container shell:

```bash
exit
```

To stop the container, run `docker compose down` with the same Compose file arguments used to start it.


## Acknowledgements

This project builds upon ROS 2 simulation templates, controller implementations, and utility scripts originally developed by Juuso Järvenpää, teaching assistant for the Advanced Robotics course at Tampere University.

These materials provided the foundation for the simulation environment and robot control architecture. The code has been adapted and extended for the autonomous workpiece loading and alignment application.