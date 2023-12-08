#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a;
	cout << "Введите число от 0 до 7: "; cin >> a;
	if (a == 0) cout << ("Нуль");
	if (a == 1) cout << ("Единица");
	if (a == 2) cout << ("Двойка");
	if (a == 3) cout << ("Тройка");
	if (a == 4) cout << ("Четвёрка");
	if (a == 5) cout << ("Пятёрка");
	if (a == 6) cout << ("Шестёрка");
	if (a == 7) cout << ("Семёрка");
}