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
        cout << "\nВведите число лет: ";
        cin >> year;

        cout << "\nЧисло дней: " << yearToDay(year) << endl;
        break;
    case 2:
        cout << "\nВведите число дней: ";
        cin >> day;

        cout << "\nЧисло часов: " << dayToHour(day) << endl;
        break;
    case 3:
        cout << "\nВведите число дней: ";
        cin >> day;

        cout << "\nЧисло минут: " << dayToMin(day) << endl;
        break;
    case 4:
        cout << "\nВведите число часов: ";
        cin >> hour;

        cout << "\nЧисло минут: " << hourToMin(hour) << endl;
        break;
    case 5:
        cout << "\nВведите число часов: ";
        cin >> hour;

        cout << "\nЧисло секунд равно: " << hourToSec(hour) << endl;
        break;
    case 6:
        cout << "\nВведите число минут: ";
        cin >> min;

        cout << "\nЧисло секунд: " << minToSec(min) << endl;
        break;
    default:
        cout << "\nНеверно введен номер операции" << endl;
    }
    return 0;
}