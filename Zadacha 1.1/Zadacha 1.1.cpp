#include <iostream>
#include <limits>
#include <clocale>

using namespace std;


//� ������ ����� ��� ��������� �� ������ �����, �� � �����, �������, ��� ��� ������((
int closureInt(int a, int b)
{
    if (a < b)
    {
        return 0;
    }
    if (a < 0 && a >= b)
    {
        cout << numeric_limits<int>::min() << a << " = " << numeric_limits<int>::min() + a << endl;
        closureInt(--a, b);
    }
    else
    {
        cout << numeric_limits<int>::min() << "+" << a << " = " << numeric_limits<int>::min() + a << endl;
        closureInt(--a, b);
    }
}

void closureIntMin(int n)
{
    cout << closureInt(n, -n);
}


int main()
{
    setlocale(LC_ALL, "RU");

    int a;

    cout << "1.���������\n2.������\n";
    cin >> a;

    switch (a)
    {
    case 1:
        int b;

        cout << "��������: ";
        cin >> b;

        closureIntMin(b);
        break;

    case 2:
        for (int i = 3; i >= -3; i--)
        {
            if (i >= 0)
                cout << numeric_limits<int>::min() << "+" << i << " = " << numeric_limits<int>::min() + i << endl;
            else if (i < 0)
                cout << numeric_limits<int>::min() << i << " = " << numeric_limits<int>::min() - i << endl;
        }
        break;
    }


    return 0;
}