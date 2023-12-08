#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip> 
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;

	cout << setw(33) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(29) << setfill(probel) << probel;
	cout << setw(17) << setfill(c) << c << endl;
	cout << setw(27) << setfill(probel) << probel;
	cout << setw(21) << setfill(c) << c << endl;
	cout << setw(25) << setfill(probel) << probel;
	cout << setw(25) << setfill(c) << c << endl;
	cout << setw(25) << setfill(probel) << probel;
	cout << setw(25) << setfill(c) << c << endl;
	cout << setw(27) << setfill(probel) << probel;
	cout << setw(21) << setfill(c) << c << endl;
	cout << setw(29) << setfill(probel) << probel;
	cout << setw(17) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
}