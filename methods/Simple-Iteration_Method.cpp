#include "../include/Header.h"

/*
* ����� ������� ���������.
* a - ������ �������.
* b - ����� �������
* sup_g - ������� � �������� ������ ������ ����������� ������� f �������� �� ������� [a,b].
* eps - ��������
*/

double simple_itteration(double a, double b, double sup_g, double eps) {
   
    printf(" - Simple Method: \n");

    /* ������������� ���������� */
    double xi = g(-1); // ��������� ��������.
    double xn; // ������ �������� 
    double q =  sup_g;
    int n = 0;

    /* ����� ��������� �������� */
    cout << endl << "[ - ] q = " << q << endl << "[ - ] Start Value = " << xi << endl << endl;

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
