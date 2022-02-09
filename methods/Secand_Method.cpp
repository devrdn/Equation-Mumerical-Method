#include "../include/Header.h"

/*
* ����� ����.
* a - ������ �������.
* b - ����� �������.
* inf, sup - ������� � �������� ������ ����������� �������� �� ������� [a,b].
* eps - ��������.
*/

double secant_method(double a, double b, double inf, double sup, double eps) {
    
    printf(" - Secant Method: \n");

    /* ������������� ���������� */
    double e;
    double xi; // ����� �������� xi (x[i+1])
    double xn; // ������ �������� (x[i]).
    int n = 0;

    /* ����������� �������������� ����� */
    if (f(a) * f2(a) > 0) {
        xi = b;
        e = a; // � ����� ������ a - ������������� �����.
    }
    else {
        xi = a;
        e = b; // � ����� ������ b - ������������� �����.
    }

    /* ����� ������������� �������� ����� � ��������� eps */
    do {
        n++;
        xn = xi;
        xi = xn - f(xn) / (f(e) - f(xn)) * (e - xn);
        printf("I = %2i | xi = %6.6f | f(xi) = %9.6f | Kr. = %10.6f\n", n, xi, f(xi), abs((sup - inf) / inf * (xi - xn)));
    } while (!(abs((sup - inf) / inf * (xi - xn)) < eps));

    /* ���������� ������������ �������� */
    return xi;
}