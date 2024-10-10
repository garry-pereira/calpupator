#include <iostream>
#include <cmath>

#include "lib.h"

int main() {
    double ans = fetch_num();
    display_num(ans);

    bool cont = true;
    while (cont) {
        Operator op;
        op = fetch_op();
        if (op == QUIT) {
            break;
        }

        double second = fetch_num();
        display_num(second);

        switch (op) {
            case ADD:
                ans = ans + second;
                break;
            case SUBTRACT:
                ans = ans - second;
                break;
            case MULTIPLY:
                ans = ans * second;
                break;
            case DIVIDE:
                if (second == 0) {
                    cont = false;
                    std::cout << "Cannot divide by zero" << std::endl;
                    break;
                }
                ans = ans / second;
                break;
            case POWER:
                ans = std::pow(ans, second);
                break;
            case QUIT:
                cont = false;
                break;
            default:
                cont = false;
                std::cout << "Operator switch statement landed in default somehow" << std::endl;
                break;
        }
        display_num(ans);
    }

    return 0;
}
