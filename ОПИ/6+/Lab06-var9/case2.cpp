#include "case2.h"
#include <iostream>
using namespace std;
int case2()
{
	setlocale(LC_CTYPE, "Russian");
	float c, p4;
	cout << "Введите стоимость билета на троллейбус: "; cin >> p4;
	c = 2 * p4;
	printf("Стоимость поездки: %5.2f", c);
	return 0;
}