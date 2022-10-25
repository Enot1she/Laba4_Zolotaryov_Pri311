#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string>

using namespace std;


int main()
{

    setlocale(LC_ALL, "Russian");
    string name = "", motto = "";
    int age = 0;
    SetConsoleCP(1251);
    cout << "Введите девиз: ";
    getline(cin, motto);
    cout << "Введите полное имя: ";
    getline(cin >> ws, name);
    cout << "Введите возраст: ";
    cin >> age;
    cout << "\nИмя: " << name << "\nВозраст: " << age << "\nДевиз: " << motto << endl;


    return 0;
}