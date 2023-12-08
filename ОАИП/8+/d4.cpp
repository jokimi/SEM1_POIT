#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a[11]{7, 2, 0, -10, 2, -1, 0, -6, 3, 2, -10}, y = 10;
	int i, x = 1, n = 0;
	for (i = 0; i < 11; i++)
	{
		if (a[i] == 0) i++;
		if (a[x] == 0) x++;
		if (a[i] < 0 && a[x] < 0 || a[i] > 0 && a[x] > 0) n++;
	}
	cout << "Количество чередований знаков - " << n << endl;
}