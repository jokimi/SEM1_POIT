#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");

	//--1--
	char tmp[33];
	int A, B, maskA = 480;
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
	cout << " Очищены биты в B: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 5)), tmp, 2);
	cout << " Результат B = " << tmp << endl << endl;

	//--2--
	char tmps[255];
	int n, p, C, D, q;
	int maskC = 0, maskD = 0;
	cout << "Число A: "; cin >> C;
	cout << "Число B: "; cin >> D;
	cout << "Сколько битов нужно заменить на 1: "; cin >> n;
	cout << "Позиция в числе А: "; cin >> p;
	p = p - n + 1;
	cout << "Позиция в числе В: "; cin >> q;
	q = q - n + 1;
	for (int i = 0; i <= n; i++)
	{
		maskC <<= 1;
		maskC++;
		maskD <<= 1;
		maskD++;
	}
	maskC <<= p;
	maskD <<= q;
	_itoa_s(C, tmps, 2);
	cout << "A = " << tmps << endl;
	_itoa_s(D, tmps, 2);
	cout << "B = " << tmps << endl;
	_itoa_s(maskC, tmps, 2);
	cout << "Маска для А: " << tmps << endl;
	_itoa_s(maskD, tmps, 2);
	cout << "Маска для В: " << tmps << endl;
	int copyfromA = (C & maskC) >> p;
	_itoa_s(C | maskC, tmps, 2);
	cout << "Новое число A = " << tmps << endl;
	_itoa_s(copyfromA, tmps, 2);
	cout << "Выделенные биты = " << tmps << endl;
	D = D & (~maskD);
	D = D | (copyfromA << q);
	_itoa_s(D, tmps, 2);
	cout << "Новое число B = " << tmps << endl;
}