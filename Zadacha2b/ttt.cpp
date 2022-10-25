#include<iostream>
#include"ttt.h"
using namespace std;
double yearToDay(double x)		//функция перевода лет в дни
{
	return x * 365;
}

double dayToHour(double x)		//функция перевода дней в часы
{
	return x * 24;
}

double hourToMin(double x)		//функция перевода дней в минуты
{
	return x * 60;
}

double minToSec(double x)		//функция перевода часов в минуты
{
	return x * 60;
}

double dayToMin(double x)		//функция перевода часов в секунды
{
	return hourToMin(dayToHour(x));;
}

double hourToSec(double x)		//функция перевода минут в секунды
{
	return minToSec(hourToMin(x));
}

void choice()		//функция вывода списка действий
{
	cout << "1. Перевести года в дни" << endl;
	cout << "2. Перевести дни в часы" << endl;
	cout << "3. Перевести дни в минуты" << endl;
	cout << "4. Перевести часы в минуты" << endl;
	cout << "5. Перевести часы в секунды" << endl;
	cout << "6. Перевести минуты в секунды" << endl;
	cout << "\nВведите номер действия: ";
}
