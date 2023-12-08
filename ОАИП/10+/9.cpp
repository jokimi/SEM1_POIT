#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");

	//--1--
	const int n = 100; int arr[n]{};
	int mn = 0, mx = 99;
	int i, sz; float sum = 0, m{}, r1, r2;
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
	for (i = 0; i < sz; i++)
	{
		sum += arr[i];
		m = sum / sz;
	}
	cout << "Среднее арифметическое значение = " << m << endl;
	r1 = arr[0] - m;
	int j = 0;
	for (i = 1; i < sz; i++)
	{
		r2 = arr[i] - m;
		if (abs(r1) > abs(r2))
		{
			j = i;
			r1 = r2;
		}
	}
	cout << "Элемент, наиболее близкий к среднему арифметическому значению - " << arr[j] << endl;
	cout << endl;

	//--2--
	int a[n]{}, b[n]{}, c[n]{};
	int x, y, k = 0, l{}, sz1, sz2, max;
	cout << "Введите размер первого массива: "; cin >> sz1;
	cout << "Массив 1: ";
	srand((unsigned)time(NULL));
	cout << "A[" << sz1 << "] = { ";
	for (x = 0; x < sz1; x++)
	{
		a[x] = (int)(((double)rand() / (double)RAND_MAX) * (mx - mn) + mn);
		cout << a[x] << " ";
	}
	cout << "}" << endl;
	cout << "Введите размер второго массива: "; cin >> sz2;
	cout << "Массив 2: ";
	srand((unsigned)time(NULL));
	cout << "B[" << sz2 << "] = { ";
	for (y = 0; y < sz2; y++)
	{
		b[y] = (int)(((double)rand() / (double)RAND_MAX) * (mx - mn) + mn);
		cout << b[y] << " ";
	}
	cout << "}" << endl;
	max = b[0];
	for (y = 0; y < sz2; y++)
	{
		if (b[y] > max)
			max = b[y];
	}
	for (x = 0; x < sz1; x++)
	{
		if (a[x] > max)
		{
			c[k++] = a[x];
			l = k;
		}
	}
	cout << "Наибольшие элементы среди элементов первого массива, которые не входят во второй массив: ";
	for (k = 0; k < l; k++)
		cout << c[k] << " ";
	cout << endl;
}