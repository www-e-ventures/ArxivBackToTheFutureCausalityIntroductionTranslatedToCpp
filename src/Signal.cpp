#include "../include/Signal.h"
//translated to c++ by e.ventures
//https://arxiv.org/pdf/2208.09014.pdf
//https://e.ventures
Signal::Signal(const Vector4D& position, const Vector4D& velocity)
        : position(position), velocity(velocity) {}

void Signal::propagate(double time) {
    position.t += velocity.t * time;
    position.x += velocity.x * time;
    position.y += velocity.y * time;
    position.z += velocity.z * time;
}
