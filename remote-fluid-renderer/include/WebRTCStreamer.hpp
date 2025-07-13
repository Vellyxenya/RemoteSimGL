#pragma once
// WebRTC streaming + input interface

class WebRTCStreamer {
public:
    bool start();
    void stop();
    void sendFrame(const void* data, size_t size);
};
