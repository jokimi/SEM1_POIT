#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, n = 0, s = 0;
	cout << "Введите количество чисел: "; cin >> n;
	cout << "Введите " << n << " чисел(-ло, -ла):" << endl;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (a % 2 == 0)
			s += a;
	}
	cout << "Сумма четных элементов последовательности - " << s << endl;
}