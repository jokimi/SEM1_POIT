#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");

	cout << "Метод трапеции: " << endl;
	double h, x, s = 0, a = 1, b = 4, n = 200;
	h = (b - a) / n;
	x = a;
	for (x; x < (b - h); x += h)
	{
		s = s + h * (pow(x, 4) + 4 + pow((x + h), 4) + 4);
		x = x + h;
	}
	cout << "s = " << s << endl;

	cout << "Метод парабол: " << endl;
	int n1 = 200, i = 1;
	double h1, x1, s1 = 0, s2 = 0, z, a1 = 1, b1 = 4;
	h1 = (b1 - a1) / (2 * n1);
	x1 = a1 + 2 * h1;
	for (i; i < n1; i++)
	{
		s2 += pow(x1, 4) + 4;
		x1 += h1;
		s1 += pow(x1, 4) + 4;
		x1 += h1;
	}
	z = (h1 / 3) * (pow(a1, 4) + 4 + 4 * (pow((a1 + h1), 4) + 4) + 4 * s1 + 2 * s2 + pow(b1, 4) + 4);
	cout << "z = " << z << endl;

	cout << "Метод дихотомии: " << endl;
	double a3, b3, x3{}, e = 0.0001;
	cout << "Введите a: "; cin >> a3;
	cout << "Введите b: "; cin >> b3;
	while (abs(a3 - b3) > (2 * e))
	{
		x3 = (a3 + b3) / 2;
		if ((pow(a3, 3) + a3 - 2) * (pow(x3, 3) + x3 - 2) <= 0)
			b3 = x3;
		else
			a3 = x3;
	}
	cout << "x = " << x3 << endl;
}