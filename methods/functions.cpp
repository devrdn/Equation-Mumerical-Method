#include "../include/Header.h"

double f(double x) {
    return x * x - exp(x);
}

double f1(double x) {
    return 2 * x - exp(x);
}

double f2(double x) {
    return 2 - exp(x);
}

double mf(double x) {
    return -x * x + exp(x);
}

double g(double x) {
    return x - (1/2.367) * (-x * x + exp(x));
}