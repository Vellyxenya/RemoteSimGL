# CMake project for remote_sim_gl
cmake_minimum_required(VERSION 3.10)
project(RemoteSimGL)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
  glfw
  GIT_REPOSITORY https://github.com/glfw/glfw.git
  GIT_TAG        3.3.8
)

FetchContent_MakeAvailable(glfw)

find_package(CUDAToolkit REQUIRED)

set(GLAD_SRC deps/glad/src/gl.c)

# Add source files
file(GLOB SRC_FILES src/*.cpp)

# Create the executable
add_executable(remote_sim_gl ${SRC_FILES})

# Include directories
target_include_directories(remote_sim_gl PRIVATE include 
deps/glm deps/nvcodec/Interface deps/glad/include) #  deps/libwebrtc)

# Link directories
target_link_directories(remote_sim_gl PRIVATE deps/nvcodec/Lib/linux/stubs/x86_64) # deps/libwebrtc/out/Default/obj

# Link libraries
target_link_libraries(remote_sim_gl PRIVATE nvcuvid nvidia-encode glfw CUDA::cuda_driver CUDA::cudart)

# Add GLAD source
target_sources(remote_sim_gl PRIVATE ${GLAD_SRC})
