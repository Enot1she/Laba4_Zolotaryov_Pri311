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
    cout << "������� �����: ";
    getline(cin, motto);
    cout << "������� ������ ���: ";
    getline(cin >> ws, name);
    cout << "������� �������: ";
    cin >> age;
    cout << "\n���: " << name << "\n�������: " << age << "\n�����: " << motto << endl;


    return 0;
}