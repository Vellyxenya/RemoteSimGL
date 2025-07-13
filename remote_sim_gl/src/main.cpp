#include "Renderer.hpp"
#include "FluidSim.hpp"
#include "NVEncoder.hpp"
#include "WebRTCStreamer.hpp"
#include "InputHandler.hpp"
#include "Common.hpp"

int main() {
    // Entry point for remote-fluid-renderer
    Renderer renderer;
    FluidSim sim;
    NVEncoder encoder;
    WebRTCStreamer streamer;
    InputHandler input;
    // ...initialize and run main loop...
    return 0;
}
