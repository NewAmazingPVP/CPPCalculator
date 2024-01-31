//
// Created by on 1/30/2024.
//

#ifndef CPPCALCULATOR_ADVANCEDCALCULATOR_H
#define CPPCALCULATOR_ADVANCEDCALCULATOR_H
#include <iostream>
#include <vector>

using namespace std;

class AdvancedCalculator {
public:
    AdvancedCalculator(int val);
    bool isPrime() const;
private:
    int value;
    vector<int> values;
};


#endif //CPPCALCULATOR_ADVANCEDCALCULATOR_H
