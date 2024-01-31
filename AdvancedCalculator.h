//
// Created by on 1/30/2024.
//

#ifndef CPPCALCULATOR_ADVANCEDCALCULATOR_H
#define CPPCALCULATOR_ADVANCEDCALCULATOR_H
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

class AdvancedCalculator {
public:
    AdvancedCalculator(int val);
    bool isPrime() const;
private:
    int value;
    vector<int> values{1,2,3,4,5,6,7,8,9};
    unordered_map<string, int> options;

};


#endif //CPPCALCULATOR_ADVANCEDCALCULATOR_H
