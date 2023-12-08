#include <iostream>
#include <cstdlib>
using namespace std;
const int N = 10;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int mass[N]{}, max, min, razn;
	cout << "Элементы: |";
	srand((unsigned)time(NULL));
	for (int r = 0; r < N; r++)
	{
		mass[r] = rand() % 99;
		cout << mass[r] << "|";
	}
	cout << endl;
	max = mass[0];
	min = mass[0];
	for (int r = 1; r < N; r++)
	{
		if (max < mass[r]) max = mass[r];
		if (min > mass[r]) min = mass[r];
	}
	razn = max - min;
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	cout << "Разница: " << razn << endl;
	return 0;
}