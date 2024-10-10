#ifndef LIB_H
#define LIB_H

enum Operator {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    POWER,
    QUIT
};

void display_num(double n);
Operator fetch_op();
double fetch_num_partial(const char* what);
double fetch_num();

#endif
