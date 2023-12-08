#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double p, q, a, b, c, S, h, r;
	cout << "Введите первую диагональ ромба: "; cin >> p;
	cout << "Введите вторую диагональ ромба: "; cin >> q;
	a = p / 2;
	b = q / 2;
	c = sqrt(a * a + b * b);
	printf("Сторона ромба - %0.4lf\n", c);
	S = (p * q) / 2;
	printf("Площадь ромба - %0.4lf\n", S);
	h = S / c;
	printf("Высота ромба - %0.4lf\n", h);
	cout << "Введите радиус шара: "; cin >> r;
	if (r > h)
	{
		printf("Шар не пройдет\n");
	}
	else if (r <= h)
	{
		printf("Шар пройдет\n");
	}
	return 0;
}