//
// Created by on 1/30/2024.
//

#include "AdvancedCalculator.h"

AdvancedCalculator::AdvancedCalculator(int val) {
    options["Squareroot"] = 1;
    options["Sine"] = 2;
    options["Cosine"] = 3;
    value = val;
}

bool AdvancedCalculator::isPrime() const {
    return value % 2 == 0;
}



