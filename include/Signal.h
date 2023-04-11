#pragma once
//https://e.ventures
//the@e.ventures
//Translated to C++ by e.ventures
//Original paper: https://arxiv.org/pdf/2208.09014.pdf
#include "Vector4D.h"

class Signal {
public:
    Vector4D position;
    Vector4D velocity;

    Signal(const Vector4D& position = Vector4D(), const Vector4D& velocity = Vector4D());

    void propagate(double time);
};
