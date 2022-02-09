#include "include/Header.h"




int main()
{
    double eps = 0.00001; // Точность.
    double a = -1.0; // Начало отрезка.
    double b = -0.6; // Конец отрезка.

    /* Метод полововинного деления */
    cout << "Bisection Method |  f(x) = 0, x = " << bisection_method(a, b, eps) << endl << endl;
   
    /* Метод хорд */
    double sup = 2.367; // Супремум первой производной функции на отрезке [a,b].
    double inf = 1.748; // Инфимум  первой производной функции на отрезке [a,b].
    cout << "Secant Method |  f(x) = 0, x = " << secant_method(a, b, inf, sup, eps) << endl << endl;

    /* Метод Ньютона */
    sup = 1.632; // Супремум второй производной функции на отрезке [a,b].
    cout << "Newton Method |  f(x) = 0, x = " << newton_method(a, b, inf, sup, eps) << endl << endl;

    sup = 2.367;
    cout << "Simple Itt Method | f(x) = 0, x = " << simple_itteration(a, b, sup, inf, eps) << endl << endl;
}
