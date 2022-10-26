#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int res = 1;
	int x = 0;
	cout << "Введите значение от которого хотите взять факториал: " << endl;
	cin >> x;
	int nachznach = x;
	if (x < 0)
	{
		cout << "Нельзя взять факториал от отрицательного числа";
	}
	else if (x == 0)
	{
		res = 1;
		cout << "Факториал от числа " << x << " = " << res;
	}
	else if (x > 0 && x <= 12 )
	{
		for (int i = x; i > 0; i--)
		{
			res = res * i;
		}
		cout << "Факториал от числа " << x << " = " << res;
	}
	else
	{
		cout << "Невозможно взять факториал от этого числа!";
	}
	return 0;
}
