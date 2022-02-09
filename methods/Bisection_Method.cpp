#include "../include/Header.h"

/*
* ����� ��������(����� ����������� �������).
* a - ������ �������.
* b - ����� �������.
* eps - ������.
*/

double bisection_method(double a, double b, double eps) {
    printf(" - Bisection Method: \n");
    double c = 0.0;
    int n = 0;
    /* ����� ������������� �������� ����� � ��������� eps */
    do {
        n++;
        c = (a + b) / 2.0; // ����� ������� �� ���.
        if (f(c) == 0)  break; // ���������, ���� �� �� ����� ������.
        /* ���������, � ����� ����� ������� ���������� ������.*/
        else if (f(c) * f(a) > 0) a = c;
        else b = c;
        printf("I = %2i | c = %6.6f | f(c) = %9.6f | Kr. = %10.6f\n", n, c, f(c), fabs(b - a));
    } while (!(fabs(b - a) < eps));
    return c;
}

