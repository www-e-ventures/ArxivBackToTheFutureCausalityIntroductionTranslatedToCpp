#pragma once
//https://e.ventures
//the@e.ventures
//Translated to C++ by e.ventures
//Original paper: https://arxiv.org/pdf/2208.09014.pdf
#include "Signal.h"
#include "Brane.h"

class Observer {
public:
    Vector4D position;

    Observer(const Vector4D& position = Vector4D());

    double observeEffectiveSpeed(const Signal& signal, const Brane& brane) const;
};
