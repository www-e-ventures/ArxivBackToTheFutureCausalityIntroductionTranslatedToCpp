#pragma once

#include "Vector4D.h"

class Signal {
public:
    Vector4D position;
    Vector4D velocity;

    Signal(const Vector4D& position = Vector4D(), const Vector4D& velocity = Vector4D());

    void propagate(double time);
};
