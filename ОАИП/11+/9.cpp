#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");

	//--1--
	char tmp[33];
	int A, B, maskA = 2016;
	int maskB = ~maskA >> 5;
	cout << "Первое число = "; cin >> A;
	_itoa_s(A, tmp, 2); cout << "A = " << tmp << endl;
	cout << "Второе число = "; cin >> B;
	_itoa_s(B, tmp, 2); cout << "B = " << tmp << endl;

	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA) >> 5, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;
	_itoa_s(B & maskB, tmp, 2);
	cout << "Очищены биты в B: " << tmp << endl;

	_itoa_s(((B & maskB) | ((A & maskA) >> 4)), tmp, 2);
	cout << "Результат B: " << tmp << endl << endl;

	//--2--
	char tmps[33];
	int C, n, p;

	cout << "Введите число A: "; cin >> C;
	_itoa_s(C, tmps, 2);
	cout << "A в двоичном коде = " << tmps << endl;

	cout << "Сколько битов нужно заменить на 0: "; cin >> n;
	cout << "С какой позиции начать замену: "; cin >> p;
	p = p - n + 1;

	unsigned int mask = (1 << n) - 1;
	C &= ~(mask << (p - 1));
	_itoa_s(C, tmps, 2);
	cout << "Итог: " << tmps << endl;
}