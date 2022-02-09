#include "../include/Header.h"

/*
* ����� ������� ���������.
* a - ������ �������.
* b - ����� �������
* inf, sup - ������� � �������� ������ ������ ����������� �������� �� ������� [a,b].
* eps - ��������
*/

double simple_itteration(double a, double b, double sup, double inf, double eps) {
    printf(" - Simple Method: \n");

    /* ������������� ���������� */
    double xi = g(-1); // ��������� ��������.
    double xn; // ������ �������� 
    double q = 0.3704;
    int n = 0;

    /* ����� ��������� �������� */
    cout << "q = " << q << endl << "xi = " << xi << endl;

    /* ����� ������������� �������� ����� � ��������� eps  */
    do {
        n++;
        xn = xi;
        xi = g(xn);
        printf("I = %2i | xi = %6.6f | f(xi) = %9.6f | Kr. = %10.6f\n", n, xi, mf(xi), q * fabs(xi - xn) / (1.0 - q));
    } while (!((q * fabs(xi - xn) / (1.0 - q)) < eps));

    /* ���������� ������������ �������� */
    return xi;
}
