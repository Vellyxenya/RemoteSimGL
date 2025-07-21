#!/bin/bash
# Build libwebrtc from source
set -e

# Install dependencies (Ubuntu)
echo "Installing build dependencies..."
sudo apt-get update && sudo apt-get install -y python3 git curl gn ninja-build pkg-config

# Set up depot_tools if not already present
if [ ! -d "../deps/depot_tools" ]; then
  echo "Cloning depot_tools..."
  git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git ../deps/depot_tools
fi
export PATH="$(pwd)/../deps/depot_tools:$PATH"

# Clone WebRTC source if not already present
cd ../deps
if [ ! -d "libwebrtc" ]; then
  echo "Cloning WebRTC source..."
  git clone https://webrtc.googlesource.com/src.git libwebrtc
fi
cd libwebrtc

# Configure gclient if .gclient does not exist
if [ ! -f .gclient ]; then
  gclient config https://webrtc.googlesource.com/src.git
fi

# Checkout a stable branch (update as needed)
git fetch
git checkout main

# Sync dependencies
gclient sync --force
gclient runhooks

# Generate build files
gn gen out/Default --args='is_debug=false rtc_include_tests=false'

# Build WebRTC static library
ninja -C out/Default

echo "libwebrtc build complete."
