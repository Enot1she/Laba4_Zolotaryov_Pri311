#include <iostream>
#include"ttt.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    choice();

    int a;
    cin >> a;

    double year, day, hour, min;
    switch (a)
    {
    case 1:
        cout << "\n������� ����� ���: ";
        cin >> year;

        cout << "\n����� ����: " << yearToDay(year) << endl;
        break;
    case 2:
        cout << "\n������� ����� ����: ";
        cin >> day;

        cout << "\n����� �����: " << dayToHour(day) << endl;
        break;
    case 3:
        cout << "\n������� ����� ����: ";
        cin >> day;

        cout << "\n����� �����: " << dayToMin(day) << endl;
        break;
    case 4:
        cout << "\n������� ����� �����: ";
        cin >> hour;

        cout << "\n����� �����: " << hourToMin(hour) << endl;
        break;
    case 5:
        cout << "\n������� ����� �����: ";
        cin >> hour;

        cout << "\n����� ������ �����: " << hourToSec(hour) << endl;
        break;
    case 6:
        cout << "\n������� ����� �����: ";
        cin >> min;

        cout << "\n����� ������: " << minToSec(min) << endl;
        break;
    default:
        cout << "\n������� ������ ����� ��������" << endl;
    }
    return 0;
}