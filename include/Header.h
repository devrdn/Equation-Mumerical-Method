#pragma once

#include <iostream>
#include <iostream>
#include <math.h>

#define _USE_MATH_DEFINES

using namespace std;

/* ������� f �� ������� ������� ������������ ������ */
double f(double x);

/* ������ ����������� ������� f(x) */
double f1(double x);

/* ������ ����������� ������� f(x) */
double f2(double x);

/* ������� -f(x) ��� ������ ������� ��������� */
double mf(double x);

/* ������� g(x) ��� ������ ������� ��������� */
double g(double x); 


/*
* ����� ��������(����� ����������� �������).
* a - ������ �������.
* b - ����� �������.
* eps - ������.
*/
double bisection_method(double a, double b, double eps);


/* 
* ����� ����.
* a - ������ �������.
* b - ����� �������.
* inf, sup - ������� � �������� ������ ������ ����������� �������� �� ������� [a,b].
* eps - ��������.
*/
double secant_method(double a, double b, double inf, double sup, double eps);


/*
* ����� �������.
* a - ������ �������.
* b - ����� �������.
* inf - ������� ������ ������ ����������� �� ������� [a,b].
* sup - �������� ������ ������ ����������� �� ������� [a,b].
* eps - ��������.
*/
double newton_method(double a, double b, double inf, double sup, double eps);

/*
* ����� ������� ���������.
* a - ������ �������.
* b - ����� �������
* inf, sup - ������� � �������� ������ ������ ����������� �������� �� ������� [a,b].
* eps - ��������
*/
double simple_itteration(double a, double b, double inf, double sup, double eps);