#include "../include/Header.h"

/* Функция f на примере которой показываются методы */
double f(double x) {
    return x * x - exp(x);
}

/* Первая производная функции f(x) */
double f1(double x) {
    return 2 * x - exp(x);
}

/* Вторая производная функции f(x) */
double f2(double x) {
    return 2 - exp(x);
}

/* Функция -f(x) для метода простых иттераций */
double mf(double x) {
    return -x * x + exp(x);
}

/* Функция g(x) для метода простых иттераций */
double g(double x)  {
    return x - (1/2.367) * (-x * x + exp(x));
}