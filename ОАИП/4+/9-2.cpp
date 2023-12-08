#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	double a, s, x;
	cout << "Введите a: "; cin >> x;
	s = x * x;
	a = s * s;
	std::cout << "a в 4-ой степени = " << a;
}