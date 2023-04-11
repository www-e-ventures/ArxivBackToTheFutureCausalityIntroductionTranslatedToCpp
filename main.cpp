#include <iostream>
#include <functional>
#include "include/Brane.h"
#include "include/Signal.h"
#include "include/Observer.h"
//translated to c++ by e.ventures
//https://arxiv.org/pdf/2208.09014.pdf
//https://e.ventures
double simulateEffectiveSpeed(
        const Brane& brane,
        const Signal& signal,
        const Observer& observer,
        double propagationTime,
        std::function<void(Signal& signal, double time)> propagateFunction
) {
Signal propagatedSignal = signal;
propagateFunction(propagatedSignal, propagationTime);
return observer.observeEffectiveSpeed(propagatedSignal, brane);
}

int main() {
    // Define a brane with initial position and velocity
    Brane brane(Vector4D(0, 0, 0, 0), Vector4D(0, 0, 0, 0.8)); // β = 0.8

    // Define a light signal with initial position and velocity
    Signal signal(Vector4D(0, 0, 0, 0), Vector4D(1, 1, 0, 0));

    // Define an observer on the brane
    Observer observer(Vector4D(0, 0, 0, 0));

    // Propagate the signal for some time
    double time = 10.0;

    // Observe the effective speed of the signal
    double effectiveSpeed = simulateEffectiveSpeed(
            brane, signal, observer, time,
            [](Signal& signal, double time) { signal.propagate(time); }
    );

    std::cout << "Effective speed of signal propagation: " << effectiveSpeed << std::endl;

    return 0;
}

