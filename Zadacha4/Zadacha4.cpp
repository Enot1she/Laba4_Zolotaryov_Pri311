#include <iostream>     
#include <bitset>


using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int num = 0, base = 0;

    cout << "������� �����: ";
    cin >> num;
    cout << "������� ������� ��������� 2, 8, 10 ��� 16: \n";
    cin >> base;
    bitset<8> num2 = num; // ��� 2��

    //showbase - ���� ���� ���������� ����� ����� ������ � �� �������� ����������.

    switch (base)
    {
    case 2:
    {
        cout << "\n� 2�� �������: " << showbase << num2 << '\n';
        break;
    }
    case 8:
    {
        cout << "� 8������ �������: " << oct << num << '\n';
        break;
    }
    case 10:
    {
        cout << "� 10������ �������: " << dec << num << '\n';
        break;
    }
    case 16:
    {
        cout << "� 16������ �������: " << hex << num << '\n';
        break;
    }
    default:
    {
        cout << "������ �������� ��� :(";
        break;
    }
    }
    return 0;
}