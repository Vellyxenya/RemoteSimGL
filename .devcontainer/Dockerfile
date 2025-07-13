# Use the Microsoft Dev Containers base image as a starting point
FROM mcr.microsoft.com/devcontainers/base:ubuntu-22.04

RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    nvidia-cuda-toolkit \
    && rm -rf /var/lib/apt/lists/*

