#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n;
	float p, s, S = 0;
	cout << "Количество лет: "; cin >> n;
	cout << "Уценка: "; cin >> p;
	for (int i = 0; i < n; i++)
	{
		cout << "Cтоимость оборудования, закупленного за " << i + 1 << "-й год: "; cin >> s;
		S = S * (100 - p) / 100;
		S += s;
	}
	cout << S;
	return 0;
}