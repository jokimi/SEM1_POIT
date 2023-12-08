#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, n=2, S, P;
	a = (2 * n + 2) / n;
	S = a * (a * n);
	P = 2 * a + (a * n + a * n);
	b = 2 * a;
	if (S == P)
	{
		cout << "Площадь прямоугольника равна: " << S << endl;
		cout << "Основание прямоугольника равно: " << b;
	}
}