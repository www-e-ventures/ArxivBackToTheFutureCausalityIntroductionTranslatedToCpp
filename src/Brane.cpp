#include "../include/Brane.h"
#include <cmath>
//translated to c++ by e.ventures
//https://arxiv.org/pdf/2208.09014.pdf
//https://e.ventures
Brane::Brane(const Vector4D& position, const Vector4D& velocity)
        : position(position), velocity(velocity) {}

Vector4D Brane::getPositionAtTime(double time) const {
    double gamma = 1.0 / sqrt(1 - pow(velocity.z, 2));
    return Vector4D(
            gamma * (time - velocity.z * position.z),
            position.x,
            position.y,
            gamma * (position.z - velocity.z * time)
    );
}

Vector4D Brane::getComovingCoordinates(const Vector4D& globalCoords) const {
    double gamma = 1.0 / sqrt(1 - pow(velocity.z, 2));
    return Vector4D(
            gamma * (globalCoords.t - velocity.z * globalCoords.z),
            globalCoords.x,
            globalCoords.y,
            gamma * (globalCoords.z - velocity.z * globalCoords.t)
    );
}
