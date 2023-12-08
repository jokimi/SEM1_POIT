#include <iostream>
#include "case1_2.h"
using namespace std;
int case1_2()
{
	setlocale(LC_CTYPE, "Russian");
	float c, p1, p2;
	cout << "Введите стоимость пути от университета до дома: "; cin >> p1;
	cout << "Введите стоимость пути от дома до цирка: "; cin >> p2;
	c = p1 + p2;
	printf("Стоимость поездки: %5.2f", c);
	return 0;
}