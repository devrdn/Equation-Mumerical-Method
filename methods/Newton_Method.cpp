#include "../include/Header.h"

/*
* Метод ньютона.
* a - начало отрезка.
* b - конец отрезка.
* inf - инфимум первой производной на отрезке [a,b].
* sup - супремум второй производной на отрезке [a,b].
* eps - точность.
*/

double newton_method(double a, double b, double inf, double sup, double eps) {
   
    printf(" - Newton Method: \n");

    /* Инициализация переменных */
    double xi; // Новое значение xi (x[i+1])
    double xn; // Старое значения (x[i]).
    int n = 0;

    /* Выбор фиксированного конца */
    if (f(a) * f2(a) < 0) {
        xi = b;
    }
    else {
        xi = a;
    }

    /* Поиск приближенного значения корня с точностью eps  */
    do {
        n++;
        xn = xi;
        xi = xn - f(xn) / f1(xn);
        printf("I = %2i | xi = %6.6f | f(xi) = %9.6f | Kr. = %10.6f\n", n, xi, f(xi), sup * (xi - xn) / 2 * inf);
    } while (!(sup * abs(xi - xn) / (2 * inf) < eps));

    /* Возвращаем приближенное значение */
    return xi;
}