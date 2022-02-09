#pragma once

#include <iostream>
#include <iostream>
#include <math.h>

#define _USE_MATH_DEFINES

using namespace std;

/* Функция f на примере которой показываются методы */
double f(double x);

/* Первая производная функции f(x) */
double f1(double x);

/* Вторая производная функции f(x) */
double f2(double x);

/* Функция -f(x) для метода простых иттераций */
double mf(double x);

/* Функция g(x) для метода простых иттераций */
double g(double x); 


/*
* Метод Бисекции(метод половинного деления).
* a - начало отрезка.
* b - конец отрезка.
* eps - корень.
*/
double bisection_method(double a, double b, double eps);


/* 
* Метод хорд.
* a - начало отрезка.
* b - конец отрезка.
* inf, sup - инфимум и супремум модуля первой производной значения на отрезке [a,b].
* eps - точность.
*/
double secant_method(double a, double b, double inf, double sup, double eps);


/*
* Метод ньютона.
* a - начало отрезка.
* b - конец отрезка.
* inf - инфимум модуля первой производной на отрезке [a,b].
* sup - супремум модуля второй производной на отрезке [a,b].
* eps - точность.
*/
double newton_method(double a, double b, double inf, double sup, double eps);

/*
* Метод простых иттераций.
* a - начало отрезка.
* b - конец отрезка
* inf, sup - инфимум и супремум модуля первой производной значения на отрезке [a,b].
* eps - точность
*/
double simple_itteration(double a, double b, double inf, double sup, double eps);