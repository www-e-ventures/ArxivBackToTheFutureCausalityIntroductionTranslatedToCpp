#include "../include/Signal.h"

Signal::Signal(const Vector4D& position, const Vector4D& velocity)
        : position(position), velocity(velocity) {}

void Signal::propagate(double time) {
    position.t += velocity.t * time;
    position.x += velocity.x * time;
    position.y += velocity.y * time;
    position.z += velocity.z * time;
}
