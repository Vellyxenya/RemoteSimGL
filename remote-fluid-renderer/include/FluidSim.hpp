#pragma once
// 2D fluid simulation engine interface

class FluidSim {
public:
    void step(float dt);
    void reset();
};
