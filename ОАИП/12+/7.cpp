#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");

	//--1--
	int n, k;
	cout << "Введите число: "; cin >> k;
	cout << "Введите размер массива: "; cin >> n;
	int* A = new int[n];
	srand(unsigned(time(NULL)));
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 100;
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "Номера элементов больше " << k << ": ";
	for (int i = 0; i < n; i++)
	{
		if (*(A + i) > k)
			cout << i + 1 << " ";
	}
	cout << endl;
	cout << "Номера элементов меньше " << k << ": ";
	for (int i = 0; i < n; i++)
	{
		if (*(A + i) < k)
			cout << i + 1 << " ";
	}
	cout << endl;
	cout << "Номера элементов, равных " << k << ": ";
	for (int i = 0; i < n; i++)
	{
		if (*(A + i) == k)
			cout << i + 1 << " ";
	}
	cout << endl << endl;

	//--2--
	int a[50]{};
	int i, N, m = 0, x, kk;
	cout << "Введите N = "; cin >> N;
	cout << "Введите k: "; cin >> kk;
	do
	{
		x = N % 10;
		N = N / 10;
		if (x % kk == 0)
		{
			a[m] = x;
			m++;
		}
	} while (N > 0);
	cout << "Массив: ";
	for (i = 0; i < m; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}