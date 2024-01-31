//
// Created by on 1/30/2024.
//

#include "AdvancedCalculator.h"

AdvancedCalculator::AdvancedCalculator(int val) {
    value = val;
}

bool AdvancedCalculator::isPrime() const {
    return value % 2 == 0;
}


