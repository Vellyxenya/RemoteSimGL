#include <glad/gl.h>
#include <GLFW/glfw3.h>

#include "Renderer.hpp"
#include "FluidSim.hpp"
#include "NVEncoder.hpp"
#include "WebRTCStreamer.hpp"
#include "InputHandler.hpp"
#include "Common.hpp"
#include <iostream>


#include <glm/glm.hpp>
#include <nvEncodeAPI.h>
#include <nvcuvid.h>
#include <cuviddec.h>


int main() {
    // Entry point for remote-fluid-renderer
    Renderer renderer;
    FluidSim sim;
    NVEncoder encoder;
    WebRTCStreamer streamer;
    InputHandler input;
    // ...initialize and run main loop...
    std::cout << "Remote Fluid Renderer started.\n";
    return 0;
}
