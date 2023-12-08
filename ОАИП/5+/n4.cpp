#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double x, y, x2, max, min, t;
	cout << "Введите x: "; cin >> x;
	cout << "Введите y: "; cin >> y;
	cout << "Введите x2: "; cin >> x2;
	max = x;
	if (y > max)
		max = y;
	else if (x2 > max)
		max = x2;
	min = x;
	if (y < min)
		min = y;
	else if (x2 < min)
		min = x2;
	cout << "min = " << min << ", max = " << max << endl;
	t = max * min;
	cout << "max * min = " << t;
}