#include "../include/Header.h"

/* ������� f �� ������� ������� ������������ ������ */
double f(double x) {
    return x * x - exp(x);
}

/* ������ ����������� ������� f(x) */
double f1(double x) {
    return 2 * x - exp(x);
}

/* ������ ����������� ������� f(x) */
double f2(double x) {
    return 2 - exp(x);
}

/* ������� -f(x) ��� ������ ������� ��������� */
double mf(double x) {
    return -x * x + exp(x);
}

/* ������� g(x) ��� ������ ������� ��������� */
double g(double x)  {
    return x - (1/2.367) * (-x * x + exp(x));
}