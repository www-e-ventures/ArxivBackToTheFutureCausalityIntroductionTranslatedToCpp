#pragma once

#include "Signal.h"
#include "Brane.h"

class Observer {
public:
    Vector4D position;

    Observer(const Vector4D& position = Vector4D());

    double observeEffectiveSpeed(const Signal& signal, const Brane& brane) const;
};
