#include <iostream>
#include <cmath>
#include <clocale>
#include "no_recursion_while.h"

using namespace std;

int no_recursion_fact_while(int x) {
    int res = 1;
    int nachznach = x;
    if (x < 0)
    {
        cout << "�������� ������ ���� ����������� �����";
    }
    else if (x == 0)
    {
        res = 1;
    }
    else
    {
        while (x > 0)
        {
            res = res * x;
            x--;
        }
    }
    cout << "��������� �� ����� " << nachznach << " = " << res;
    return 0;
}