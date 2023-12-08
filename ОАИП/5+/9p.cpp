#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a, b, c;
	cout << "Введите a: "; cin >> a;
	cout << "Введите b: "; cin >> b;
	cout << "Дробь: " << a << "/" << b << endl;
	c = a / b;
	c >= 1 ?
		cout << ("Дробь неправильная"):
		cout << ("Дробь правильная");
}