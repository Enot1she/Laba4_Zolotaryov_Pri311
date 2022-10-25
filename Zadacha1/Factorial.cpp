#include <cmath>
#include <iostream>
#include "Factorial.h"

using namespace std;

unsigned int fact(int x)
{
    if (x < 0)// Если отрицательное число
    {
        cout << "Вы ввели отрицательное значение" << endl;;
        return 0;
    }
    if (x == 0) // Если ноль
    {
        return 1; // Возвращаем факториал от нуля(1)
    }
    if (x > 12) // Проверяем на x < 12
    {
        cout << "Вы ввели значение больше 12" << endl;
        return 0;
    }
    else
    {
        return x * fact(x - 1); // Вычисляем факториал через рекурсию
    }
}