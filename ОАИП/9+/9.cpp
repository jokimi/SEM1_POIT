#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Метод трапеции: " << endl;
	double h, x, s = 0, a = 1, b = 4, n = 200;
	h = (b - a) / n;
	x = a;
	for (x; x <= (b - h); x += h)
	{
		s = s + h * (pow(x, 3) + 3 + pow((x + h), 3) + 3);
		x += h;
	}
	cout << "s = " << s << endl;

	cout << "Метод парабол: " << endl;
	int n1 = 200, i = 1;
	double h1, x1, s1 = 0, s2 = 0, z, a1 = 1, b1 = 4;
	h1 = (b1 - a1) / (2 * n1);
	x1 = a1 + 2 * h1;
	for (i; i < n1; i++)
	{
		s2 += pow(x1, 3) + 3;
		x1 += h1;
		s1 += pow(x1, 3) + 3;
		x1 += h1;
	}
	z = (h1 / 3) * (pow(a1, 3) + 3 + 4 * (pow((a1 + h1), 3) + 3) + 4 * s1 + 2 * s2 + pow(b1, 3) + 3);
	cout << "z = " << z << endl;

	cout << "Метод дихотомии: " << endl;
	double a3, b3, e = 0.0001, x3{};
	cout << "Введите a: "; cin >> a3;
	cout << "Введите b: "; cin >> b3;
	while (abs(a3 - b3) > (2 * e))
	{
		x3 = (a3 + b3) / 2;
		if ((sin(a3) + pow(a3, 3)) * (sin(x3) + pow(x3, 3)) <= 0)
			b3 = x3;
		else
			a3 = x3;
	}
	cout << "x = " << x3 << endl;
}