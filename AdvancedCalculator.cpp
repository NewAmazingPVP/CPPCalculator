//
// Created by on 1/30/2024.
//

#include "AdvancedCalculator.h"

AdvancedCalculator::AdvancedCalculator(int val) {
    myMap["Alice"] = 25;
    myMap["Bob"] = 30;
    myMap["Charlie"] = 22;
    value = val;
}

bool AdvancedCalculator::isPrime() const {
    return value % 2 == 0;
}



