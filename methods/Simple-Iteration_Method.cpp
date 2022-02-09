#include "../include/Header.h"

/*
* Метод простых иттераций.
* a - начало отрезка.
* b - конец отрезка
* sup_g - инфимум и супремум модуля первой производной функции f значения на отрезке [a,b].
* eps - точность
*/

double simple_itteration(double a, double b, double sup_g, double eps) {
   
    printf(" - Simple Method: \n");

    /* Инициализация переменных */
    double xi = g(-1); // Начальное значение.
    double xn; // Старое значение 
    double q =  sup_g;
    int n = 0;

    /* Вывод начальных значений */
    cout << endl << "[ - ] q = " << q << endl << "[ - ] Start Value = " << xi << endl << endl;

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
