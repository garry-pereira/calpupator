#include <iostream>
#include <cmath>

#include "lib.h"

void display_num(double n) {
    std::cout << "[value]: " << n << std::endl;
    std::cout << std::endl;
}

Operator fetch_op() {
    std::string s;
    std::cout << "[operator]: ";
    std::cin >> s;
    if (s == "+") {
        return ADD;
    } else if (s == "-") {
        return SUBTRACT;
    } else if (s == "*") {
        return MULTIPLY;
    } else if (s == "/") {
        return DIVIDE;
    } else if (s == "^") {
        return POWER;
    }  else {
        std::cout << "unrecognized operator. quitting.." << std::endl;
        return QUIT;
    }
}


double fetch_num_partial(const char* what) {
    double i;
    std::cout << what << ": ";
    std::cin >> i;
    return i;
}

double fetch_num() {
    double mantissa, base, expo;
    mantissa = fetch_num_partial("mantissa");
    base = fetch_num_partial("base");
    expo = fetch_num_partial("expo");

    return mantissa * std::pow(base, expo);
}
