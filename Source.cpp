#include "include/Header.h"

int main()
{
    /* Инициализация переменных */
    double eps = 0.0001; // Точность.
    double a = -1.0; // Начало отрезка.
    double b = -0.6; // Конец отрезка.
    double sup_1 = 2.367; // Супремум первой производной функции на отрезке [a,b].
    double inf_1 = 1.748; // Инфимум  первой производной функции на отрезке [a,b].
    double sup_2 = 1.632; // Супремум второй производной функции на отрезке [a,b].
    double sup_g = 0.267;

    /* Метод полововинного деления */
    cout << "Bisection Method |  f(x) = 0, x = " << bisection_method(a, b, eps) << endl << endl;
   
    /* Метод хорд */
    cout << "Secant Method |  f(x) = 0, x = " << secant_method(a, b, inf_1, sup_1, eps) << endl << endl;

    /* Метод Ньютона */
    cout << "Newton Method |  f(x) = 0, x = " << newton_method(a, b, inf_1, sup_2, eps) << endl << endl;

    /* Метод простых иттераций */
    cout << "Simple Itt Method | f(x) = 0, x = " << simple_itteration(a, b, sup_g, eps) << endl << endl;
}
