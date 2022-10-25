#include <iostream>     
#include <bitset>


using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int num = 0, base = 0;

    cout << "Введите число: ";
    cin >> num;
    cout << "Введите систему счисления 2, 8, 10 или 16: \n";
    cin >> base;
    bitset<8> num2 = num; // Для 2ой

    //showbase - Этот флаг отображает целые числа вместе с их базовыми префиксами.

    switch (base)
    {
    case 2:
    {
        cout << "\nВ 2ой системе: " << showbase << num2 << '\n';
        break;
    }
    case 8:
    {
        cout << "В 8ричной системе: " << oct << num << '\n';
        break;
    }
    case 10:
    {
        cout << "В 10тичной системе: " << dec << num << '\n';
        break;
    }
    case 16:
    {
        cout << "В 16ричной системе: " << hex << num << '\n';
        break;
    }
    default:
    {
        cout << "Такого варианта нет :(";
        break;
    }
    }
    return 0;
}