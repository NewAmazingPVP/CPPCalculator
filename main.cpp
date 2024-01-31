#include <iostream>
#include <iomanip>
#include <chrono>
#include <cmath>
#include <memory>
#include "AdvancedCalculator.h"

using namespace std;
using namespace chrono;

double performOperation(const string& s, double first, double second){
    if(s == "Division"){
        return first / second;
    }
    if(s == "Multiplication"){
        return first * second;
    }
    if(s == "Addition"){
        return first + second;
    }
    if(s == "Subtraction"){
        return first - second;
    }
    if(s == "Squareroot"){
        return sqrt(first);
    }
    if(s == "Cosine"){
        return cos(first);
    }
    return 0;
}

int main() {
    cout << "Basic calculator welcomes you!\n";
    string s;
    cout << "Specify what operation you want to perform!\nDivision\nMultiplication\nAddition\nSubtraction\n";
    cin >> s;
    cout << "You specified " + s;
    cout << "\nEnter the first number: \n";
    double firstNum;
    cin >> firstNum;
    cout << "Enter the second number: \n";
    double secondNum;
    cin >> secondNum;
    auto start_time = high_resolution_clock::now();
    cout << setprecision(10) << performOperation(s, firstNum, secondNum);
    auto end_time = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(end_time - start_time);
    cout << "\nTotal time: " << duration.count() << " nanoseconds";

    //cout << "\n" << (e->isPrime() ? "true" : "false");
    cout << "Select what advance operation you want to do:"
            "\n1. Squareroot"
            "\n2. Sine"
            "\n3. Cosine"
            "\n4. isPrime"
            "\n5. Facotrial"
            "\n6. Fibonaci";
    int option;
    cin >> option;
    unique_ptr<AdvancedCalculator> e(new AdvancedCalculator(option));
    return 0;
}
