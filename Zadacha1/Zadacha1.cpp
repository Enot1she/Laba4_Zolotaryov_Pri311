// Zadacha1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <clocale>
#include "no_recursion_for.h"
#include "no_recursion_while.h"
#include "no_recursion_do_while.h"
#include "Factorial.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int selectt = 0, x = 0;
    cout << "Каким методом хотите решить?\n";
    cout << "1. for \n2. while\n3. do while\n4. Рекурсией";
    cin >> selectt;
    cout << "Введите число от которого хотите взять факториал: \n";
    cin >> x;

    if (selectt == 1) {
        no_recursion_fact_for(x);

    }
    if (selectt == 2) {
        no_recursion_fact_while(x);

    }
    if (selectt == 3) {
        no_recursion_fact_do_while(x);

    }
    if (selectt == 4) {
        fact(x);
    }
    return 0;
}

// Мне правда хотелось расписать это по отдельным файлам, но я устал(((

