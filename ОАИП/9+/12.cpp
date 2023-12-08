#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Метод трапеции: " << endl;
	double h, x, s = 0, a = 5, b = 11, n = 200;
	h = (b - a) / n;
	x = a;
	for (x; x < (b - h); x += h)
	{
		s += h * (exp(x) + 6 + exp(x + h) + 6) / 2;
	}
	cout << "s = " << s << endl;

	cout << "Метод парабол: " << endl;
	int n1 = 200, i = 1;
	double h1, x1, s1 = 0, s2 = 0, z, a1 = 5, b1 = 11;
	h1 = (b1 - a1) / (2 * n1);
	x1 = a1 + 2 * h1;
	for (i; i < n1; i++)
	{
		s2 += exp(x1) + 6;
		x1 += h1;
		s1 += exp(x1) + 6;
		x1 += h1;
	}
	z = (h1 / 3) * (exp(a1) + 6 + 4 * (exp(a1 + h1) + 6) + 4 * s1 + 2 * s2 + exp(b1) + 6);
	cout << "z = " << z << endl;

	cout << "Метод дихотомии: " << endl;
	double a3, b3, x3{}, e = 0.0001;
	cout << "Введите a: "; cin >> a3;
	cout << "Введите b: "; cin >> b3;
	while (abs(a3 - b3) > (2 * e))
	{
		x3 = (a3 + b3) / 2;
		if ((pow(a3, 3) + 2 * a3 - 4) * (pow(x3, 3) + 2 * x3 - 4) <= 0)
			b3 = x3;
		else
			a3 = x3;
	}
	cout << "x = " << x3 << endl;
}