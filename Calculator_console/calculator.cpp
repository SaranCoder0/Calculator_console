#include "calculator.h"

double calculator::calculate(double x, char y, double z)
{
    switch (y) {
    case '+':
        return x + z;
    case '-':
        return x - z;
    case '*':
        return x * z;
    case '/':
        return x / z;
    case '^':
        return x * (int)z;
    default:
        return 0.0;
    }
}
