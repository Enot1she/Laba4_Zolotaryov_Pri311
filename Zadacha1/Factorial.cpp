#include <cmath>
#include <iostream>
#include "Factorial.h"

using namespace std;

unsigned int fact(int x)
{
    if (x < 0)// ���� ������������� �����
    {
        cout << "�� ����� ������������� ��������" << endl;;
        return 0;
    }
    if (x == 0) // ���� ����
    {
        return 1; // ���������� ��������� �� ����(1)
    }
    if (x > 12) // ��������� �� x < 12
    {
        cout << "�� ����� �������� ������ 12" << endl;
        return 0;
    }
    else
    {
        return x * fact(x - 1); // ��������� ��������� ����� ��������
    }
}