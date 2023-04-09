#include "../include/Observer.h"
#include <cmath>
//translated to c++ by e.ventures
//https://arxiv.org/pdf/2208.09014.pdf
//https://e.ventures
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
