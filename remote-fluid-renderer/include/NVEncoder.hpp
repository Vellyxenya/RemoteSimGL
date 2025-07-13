#pragma once
// NVENC wrapper interface

class NVEncoder {
public:
    bool initialize(int width, int height);
    void encodeFrame(const void* frameData);
    void shutdown();
};
