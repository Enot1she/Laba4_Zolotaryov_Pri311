#include <iostream>
#include <string>
#include<iomanip>
#include "status_func.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    choice();      
    for (;;)        
    {
        madTest();      
        sadTest();
        hungryTest();
        illTest();
        angryTest();
        deadTest();
        youngTest();
        boringTest();

        statist();     

        string end{};
        cout << "Хватит на сегодня?(yes/no) " << endl;
        cin >> end;

        if (end == "yes")       
        {
            cout << "Конец";
            break;
        }
        else
        {
            cout << "Тогда продолжаем";
        }
    }

}