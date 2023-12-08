#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int n = 100; int arr[n]{};
	int mn = 0, mx = 99;
	int i, sz;
	cout << "Введите размер массива: "; cin >> sz;
	cout << "Массив: ";
	cout << "arr[" << sz << "] = { ";
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		arr[i] = (int)(((double)rand() / (double)RAND_MAX) * (mx - mn) + mn);
		cout << arr[i] << " ";
	}
	cout << "}" << endl;
	int count = 0;
	for (int i = 0; i < sz - 1; i++)
		if (arr[i] == arr[i + 1]) count++;
	cout << "Количество пар соседних элементов массива с одинаковыми значениями: " << count << endl;
}