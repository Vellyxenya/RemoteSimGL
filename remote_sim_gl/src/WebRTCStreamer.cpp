#include "WebRTCStreamer.hpp"

bool WebRTCStreamer::start() { return true; }
void WebRTCStreamer::stop() {}
void WebRTCStreamer::sendFrame(const void* data, size_t size) { (void)data; (void)size; }
