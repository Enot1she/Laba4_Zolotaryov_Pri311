#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int res = 1;
	int x = 0;
	cout << "������� �������� �� �������� ������ ����� ���������: " << endl;
	cin >> x;
	int nachznach = x;
	if (x < 0)
	{
		cout << "������ ����� ��������� �� �������������� �����";
	}
	else if (x == 0)
	{
		res = 1;
		cout << "��������� �� ����� " << x << " = " << res;
	}
	else if (x > 0 && x <= 12 )
	{
		for (int i = x; i > 0; i--)
		{
			res = res * i;
		}
		cout << "��������� �� ����� " << x << " = " << res;
	}
	else
	{
		cout << "���������� ����� ��������� �� ����� �����!";
	}
	return 0;
}
