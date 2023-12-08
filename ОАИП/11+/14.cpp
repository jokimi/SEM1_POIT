#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");

	//--1--
	char tmp[30];
	int a, k = 0, i, mask = 2047;
	cout << "Введите число: "; cin >> a;
	_itoa_s(a, tmp, 2);
	cout << "Число в двоичном коде: " << tmp << endl;
	_itoa_s(mask, tmp, 2);
	cout << "Маска: " << tmp << endl;
	_itoa_s((a & mask) >> 5, tmp, 2);
	cout << "Выделенные биты: " << tmp << endl;
	for (i = 10; i >= 0; i--)
	{
		if (tmp[i] == '1')
		{
			k++;
		}
	}
	cout << "Количество единиц: " << k << endl << endl;

	//--2--
	char tmps[33];
	int c, d, n, m;
	cout << "Введите A: ", cin >> c;
	cout << "Введите B: ", cin >> d;
	cout << "Введите n: ", cin >> n;
	cout << "Введите m: ", cin >> m;
	_itoa_s(c, tmps, 2); cout << "Число A - " << tmps << endl;
	_itoa_s(d, tmps, 2); cout << "Число B - " << tmps << endl;
	d ^= 7 << m;
	d |= ((c & (7 << n)) >> n) << m;
	_itoa_s(d, tmps, 2); cout << "B = " << tmps << endl;
}