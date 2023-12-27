#pragma once
#include <iostream>
#include <cmath>

double factorial(int n) 
{
    if (n == 0) return 1.0;
    double result = 1.0;
    for (int i = 1; i <= n; ++i) 
    {
        result *= i;
    }
    return result;
}

double mclaurinSeries(double x, int n) {
    double result = 1.0;  // ������ � ������� ����� ���� ������� (1)

    for (int i = 1; i <= n; ++i) {
        result += pow(x, i) / factorial(i);
    }

    return result;
}


//FUNCTION FOR SPECIFIC VALUES OF X AND N 
// �) �������� �������� ���������� x � n
double CaseA(double �x, int cn)
{

    double x = �x;
    int n = cn;

    
    double result = mclaurinSeries(x, n);
    return result;
}

void CaseB(double estep, double estart, double eend, int en)
{
    // �) �������� �������� �������� ������� ���������� (��������� ��������, �������� ��������, �������� ����)
    double step = estep;
    double start = estart;
    double end = eend;
    double res;
        
    int n = en;



    for (double x = start; x <= end; x += step) {
        res = mclaurinSeries(x, n);
        std::cout << "Result for x = " << x << " and n = " << n << " is: " << res << std::endl;
    }
}


