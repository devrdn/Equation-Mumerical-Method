#include "../include/Header.h"

/*
* Метод хорд.
* a - начало отрезка.
* b - конец отрезка.
* inf, sup - инфимум и супремум первой производной значени€ на отрезке [a,b].
* eps - точность.
*/

double secant_method(double a, double b, double inf, double sup, double eps) {
    
    printf(" - Secant Method: \n");

    /* »нициализаци€ переменных */
    double e;
    double xi; // Ќовое значение xi (x[i+1])
    double xn; // —тарое значени€ (x[i]).
    int n = 0;

    /* ќпределение фиксированного конца */
    if (f(a) * f2(a) > 0) {
        xi = b;
        e = a; // в даном случае a - фиксированна€ точка.
    }
    else {
        xi = a;
        e = b; // в даном случае b - фиксированна€ точка.
    }

    /* ѕоиск приближенного значени€ корн€ с точностью eps */
    do {
        n++;
        xn = xi;
        xi = xn - f(xn) / (f(e) - f(xn)) * (e - xn);
        printf("I = %2i | xi = %6.6f | f(xi) = %9.6f | Kr. = %10.6f\n", n, xi, f(xi), abs((sup - inf) / inf * (xi - xn)));
    } while (!(abs((sup - inf) / inf * (xi - xn)) < eps));

    /* ¬озвращаем приближенное значение */
    return xi;
}