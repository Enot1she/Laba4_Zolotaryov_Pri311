#include<iostream>
#include"ttt.h"
using namespace std;
double yearToDay(double x)		//������� �������� ��� � ���
{
	return x * 365;
}

double dayToHour(double x)		//������� �������� ���� � ����
{
	return x * 24;
}

double hourToMin(double x)		//������� �������� ���� � ������
{
	return x * 60;
}

double minToSec(double x)		//������� �������� ����� � ������
{
	return x * 60;
}

double dayToMin(double x)		//������� �������� ����� � �������
{
	return hourToMin(dayToHour(x));;
}

double hourToSec(double x)		//������� �������� ����� � �������
{
	return minToSec(hourToMin(x));
}

void choice()		//������� ������ ������ ��������
{
	cout << "1. ��������� ���� � ���" << endl;
	cout << "2. ��������� ��� � ����" << endl;
	cout << "3. ��������� ��� � ������" << endl;
	cout << "4. ��������� ���� � ������" << endl;
	cout << "5. ��������� ���� � �������" << endl;
	cout << "6. ��������� ������ � �������" << endl;
	cout << "\n������� ����� ��������: ";
}
