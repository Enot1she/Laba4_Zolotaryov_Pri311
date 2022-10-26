#include<iostream>
#include"const.h"
#include"status_func.h"
using namespace std;

void listt(int x)
{
    cout << "0.�������� �������" << endl;
    cout << "1.�������� �������" << endl;
    cout << "2.�������� �������" << endl;
    cout << "3.�������� �����" << endl;
    cout << "4.�������� ���" << endl;
    cout << "5.�������� �����" << endl;
    cout << "6.�������� �����" << endl;
    cout << "7.�������� �������" << endl;
    cout << "������� ���� ��� ��������� ������������� ���������:" << endl;
}

void choice()   
{
    int a, pr{ 0 };
    for (;;)
    {
        listt(1);
        cout << "���� ��� �������������� ������� ������� ����� ����� ������� ��� � ������ " << endl;
        cin >> a;
        switch (a)
        {
        case 0:
            pers |= maskMad;
            cout << "��� �������� ��������� �� ������" << endl;
            break;
        case 1:
            pers |= maskSad;
            cout << "��� �������� ��������" << endl;
            break;
        case 2:
            pers |= maskHungry;
            cout << "��� �������� ��������" << endl;
            break;
        case 3:
            pers |= maskIll;
            cout << "��� �������� �����" << endl;
            break;
        case 4:
            pers |= maskAngry;
            cout << "��� �������� ����" << endl;
            break;
        case 5:
            pers |= maskDead;
            cout << " ��� �������� �����" << endl;
            break;
        case 6:
            pers |= maskYoung;
            cout << "��� �������� �������" << endl;
            break;
        case 7:
            pers |= maskBoring;
            cout << "��� �������� �������" << endl;
            break;
        default:
            pr = 1;
            break;
        }
        if (pr == 1)
        {
            break;
        }
    }
}


void madTest()
{
    string mad{};
    cout << "������ ������� � ���������?(yes/no) " << endl;
    cin >> mad;

    if (mad == "yes")
    {
        pers &= ~maskMad;
        cout << "��� �������� ��������� ������" << endl;
    }
    else
    {
        pers |= maskMad;
        cout << "��� �������� ����� � ���" << endl;
    }
}

void sadTest()
{
    string sad{};
    cout << "������ ��������� �������?(yes/no)" << endl;
    cin >> sad;
    if (sad == "yes")
    {
        pers &= ~maskSad;
        cout << "������ ��������� ������" << endl;
        cout << "������� ����� ������� � ���� �����, ����� � ������... ��������� - ������� �������.";
    }
    else
    {
        pers |= maskSad;
        cout << "������ ��������� �������" << endl;
    }
}

void hungryTest()
{
    string hungry{};
    cout << "������ ������ � ������?(yes/no)" << endl;
    cin >> hungry;
    if (hungry == "yes")
    {
        pers &= ~maskHungry;
        cout << "��� �������� ��� � ������ �����" << endl;
    }
    else
    {
        pers |= maskHungry;
        cout << "��� �������� �������� � ����� ����";
    }
}

void illTest()
{
    string ill{};
    cout << "������ ������� �������?(yes/no)" << endl;
    cin >> ill;
    if (ill == "yes")
    {
        pers &= ~maskIll;
        cout << "��� �������� ������" << endl;
    }
    else
    {
        pers |= maskIll;
        cout << "��� �������� �������" << endl;
    }
}

void angryTest()
{
    string angry{};
    cout << "������������ � ���������� �����?(yes/no)" << endl;
    cin >> angry;
    if (angry == "yes")
    {
        pers &= ~maskAngry;
        cout << "��� �������� ������ �������" << endl;
    }
    else
    {
        pers |= maskAngry;
        cout << "��� �������� ���" << endl;
    }
}

void deadTest()
{
    string dead{};
    cout << "������ ������ ������� ������������?(yes/no)" << endl;
    cin >> dead;
    if (dead == "yes")
    {
        pers &= ~maskDead;
        cout << "��� �������� ���" << endl;
    }
    else
    {
        pers |= maskDead;
        cout << "��� �������� �����" << endl;
    }
}

void youngTest()
{
    string young{};
    cout << "������ ������� ������������� ���� �� ����?(yes/no)" << endl;;
    cin >> young;
    if (young == "yes")
    {
        pers |= maskYoung;
        cout << "��� �������� ����� �����" << endl;
    }
    else
    {
        pers &= ~maskYoung;
        cout << "������ ��������� ���� ������ �������� " << endl;
    }
}

void boringTest()
{
    string boring{};
    cout << "������ ������������?(yes/no)" << endl;;
    cin >> boring;
    if (boring == "yes")
    {
        pers &= ~maskBoring;
        cout << "��� �������� ������� �������� �����" << endl;
    }
    else
    {
        pers |= maskBoring;
        cout << "��� �������� ��������" << endl;
    }
}

void statist()
{
    cout << "\t����������" << endl;
    cout << "�������� " << ((pers & maskMad) ? "�������" : "�� �������") << endl;
    cout << "�������� " << ((pers & maskSad) ? "�������" : "��������") << endl;
    cout << "�������� " << ((pers & maskHungry) ? "�������" : "���") << endl;
    cout << "�������� " << ((pers & maskIll) ? "������" : "������") << endl;
    cout << "�������� " << ((pers & maskAngry) ? "���" : "�������") << endl;
    cout << "�������� " << ((pers & maskDead) ? "�����" : "���") << endl;
    cout << "�������� " << ((pers & maskYoung) ? "�����" : "������") << endl;
    cout << "�������� " << ((pers & maskBoring) ? "�������" : "���-�� �����") << endl;
}
