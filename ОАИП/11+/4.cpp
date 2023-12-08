#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	//--1--
	int A; char tmp[33];
	cout << "Введите число: "; cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "Число в двоичном виде: " << tmp << endl;
	if ((A & 3) == 0)
		cout << "Число кратно 4." << endl << endl;
	else
		cout << "Число не кратно 4." << endl << endl;

	//--2--
	unsigned int a, n, p, mask;
	char tA[33];
	char tM[33];
	cout << "Введите число: "; cin >> a;
	_itoa_s(a, tA, 2);
	cout << "Число в двоичном виде: " << tA << endl;
	cout << "Сколько битов нужно заменить на 1: "; cin >> n;
	cout << "С какой позиции начать замену: "; cin >> p;
	mask = (1u << n) - 1;
	mask << p;
	_itoa_s(mask, tM, 2);
	cout << "Маска: " << tM << endl;
	a |= mask;
	_itoa_s(a, tA, 2);
	cout << "Итог: " << tA << endl;
}