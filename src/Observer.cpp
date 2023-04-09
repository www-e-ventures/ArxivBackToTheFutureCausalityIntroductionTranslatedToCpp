#include "../include/Observer.h"
#include <cmath>

Observer::Observer(const Vector4D& position)
        : position(position) {}

double Observer::observeEffectiveSpeed(const Signal& signal, const Brane& brane) const {
    Vector4D comovingSignalPos = brane.getComovingCoordinates(signal.position);
    double deltaX = comovingSignalPos.x - position.x;
    double deltaT = comovingSignalPos.t - position.t;

    if (deltaT == 0) {
        return 0;
    }

    return deltaX / deltaT;
}
