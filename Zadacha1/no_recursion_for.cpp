#include <iostream>
#include <cmath>
#include <clocale>
#include "no_recursion_for.h"

using namespace std;

int no_recursion_fact_for(int x) {
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
        for (int i = x; i > 0; i--)
        {
            res = res * i;
        }
    }
    cout << "��������� �� ����� " << x << " = " << res;
    return 0;

}