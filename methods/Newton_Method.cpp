#include "../include/Header.h"

/*
* ����� �������.
* a - ������ �������.
* b - ����� �������.
* inf - ������� ������ ����������� �� ������� [a,b].
* sup - �������� ������ ����������� �� ������� [a,b].
* eps - ��������.
*/

double newton_method(double a, double b, double inf, double sup, double eps) {
   
    printf(" - Newton Method: \n");

    /* ������������� ���������� */
    double xi; // ����� �������� xi (x[i+1])
    double xn; // ������ �������� (x[i]).
    int n = 0;

    /* ����� �������������� ����� */
    if (f(a) * f2(a) < 0) {
        xi = b;
    }
    else {
        xi = a;
    }

    /* ����� ������������� �������� ����� � ��������� eps  */
    do {
        n++;
        xn = xi;
        xi = xn - f(xn) / f1(xn);
        printf("I = %2i | xi = %6.6f | f(xi) = %9.6f | Kr. = %10.6f\n", n, xi, f(xi), sup * (xi - xn) / 2 * inf);
    } while (!(sup * abs(xi - xn) / (2 * inf) < eps));

    /* ���������� ������������ �������� */
    return xi;
}