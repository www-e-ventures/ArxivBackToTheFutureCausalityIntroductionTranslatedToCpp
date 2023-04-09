#pragma once

#include "Vector4D.h"

class Brane {
public:
    Vector4D position;
    Vector4D velocity;

    Brane(const Vector4D& position = Vector4D(), const Vector4D& velocity = Vector4D());

    Vector4D getPositionAtTime(double time) const;
    Vector4D getComovingCoordinates(const Vector4D& globalCoords) const;
};
