#include "../include/Header.h"

/*
* Метод простых иттераций.
* a - начало отрезка.
* b - конец отрезка
* inf, sup - инфимум и супремум модуля первой производной значения на отрезке [a,b].
* eps - точность
*/

double simple_itteration(double a, double b, double sup, double inf, double eps) {
    printf(" - Simple Method: \n");

    /* Инициализация переменных */
    double xi = g(-1); // Начальное значение.
    double xn; // Старое значение 
    double q = 0.3704;
    int n = 0;

    /* Вывод начальных значений */
    cout << "q = " << q << endl << "xi = " << xi << endl;

    /* Поиск приближенного значения корня с точностью eps  */
    do {
        n++;
        xn = xi;
        xi = g(xn);
        printf("I = %2i | xi = %6.6f | f(xi) = %9.6f | Kr. = %10.6f\n", n, xi, mf(xi), q * fabs(xi - xn) / (1.0 - q));
    } while (!((q * fabs(xi - xn) / (1.0 - q)) < eps));

    /* Возвращаем приближенное значение */
    return xi;
}
