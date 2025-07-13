# Remote Fluid Renderer

A real-time 2D fluid simulation and renderer with WebRTC streaming and mobile client support.

## Structure
- **src/**: C++ source files
- **include/**: C++ headers
- **deps/**: External dependencies (libwebrtc, nvcodec, glm)
- **shaders/**: GLSL shaders
- **client/**: WebRTC mobile client (HTML/JS)
- **signaling-server/**: WebSocket signaling server
- **scripts/**: Build and run scripts
- **build/**: CMake build output

## Build Instructions
See `scripts/build_webrtc.sh` and CMake usage in the main directory.
