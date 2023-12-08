#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int y;
	cout << "Введите год: "; cin >> y;
	y%4 == 0 ?
		cout << ("Год високосный") :
		cout << ("Год невисокосный");
}