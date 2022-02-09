#include "../include/Header.h"

/*
* Метод Бисекции(метод половинного деления).
* a - начало отрезка.
* b - конец отрезка.
* eps - корень.
*/

double bisection_method(double a, double b, double eps) {
    printf(" - Bisection Method: \n");
    double c = 0.0;
    int n = 0;
    /* Поиск приближенного значения корня с точностью eps */
    do {
        n++;
        c = (a + b) / 2.0; // Делим отрезом на два.
        if (f(c) == 0)  break; // Проверяем, если мы не нашли корень.
        /* Проверяем, в какой части отрезка находиится корень.*/
        else if (f(c) * f(a) > 0) a = c;
        else b = c;
        printf("I = %2i | c = %6.6f | f(c) = %9.6f | Kr. = %10.6f\n", n, c, f(c), fabs(b - a));
    } while (!(fabs(b - a) < eps));
    return c;
}

