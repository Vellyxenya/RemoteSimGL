# CMake project for remote_sim_gl
cmake_minimum_required(VERSION 3.10)
project(RemoteSimGL)

set(CMAKE_CXX_STANDARD 17)

# Add source files
file(GLOB SRC_FILES src/*.cpp)

# Include directories
include_directories(include deps/glm)

add_executable(remote_sim_gl ${SRC_FILES})

# Link external libraries as needed
# target_link_libraries(remote_sim_gl ...)
