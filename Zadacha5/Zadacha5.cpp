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
        cout << "������ �� �������?(yes/no) " << endl;
        cin >> end;

        if (end == "yes")       
        {
            cout << "�����";
            break;
        }
        else
        {
            cout << "����� ����������";
        }
    }

}