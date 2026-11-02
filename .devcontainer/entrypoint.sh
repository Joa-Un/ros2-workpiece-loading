#!/bin/bash
set -e

# Fix device group access dynamically (host GIDs vary per machine)
for dev in /dev/dri/*; do
    if [ -e "$dev" ]; then
        gid=$(stat -c '%g' "$dev")

        if ! getent group "$gid" > /dev/null 2>&1; then
            sudo groupadd -g "$gid" "hostgrp_$gid"
        fi

        group_name=$(getent group "$gid" | cut -d: -f1)
        sudo usermod -aG "$group_name" "$(whoami)"
    fi
done

# Source ROS 2 Humble
source /opt/ros/humble/setup.bash

# Source the project workspace if it has been built
if [ -f "/workspace/install/setup.bash" ]; then
    source /workspace/install/setup.bash
fi

exec "$@"
