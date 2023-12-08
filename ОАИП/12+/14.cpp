#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	//--1--
	const int i = 30, j = 40;
	int n, x[i]{}, y[j]{}, g, iter = 0;
	srand((unsigned)time(NULL));
	cout << "Введите размер массива (не более 30): "; cin >> n;
	int* px = x;
	for (int f = 0; f < n; f++)
	{
		x[f] = rand() % 7;
		cout << *(px + f) << " ";
	}
	cout << endl;
	cout << "Введите размер массива (не более 40): "; cin >> g;
	int* py = y;
	for (int f = 0; f < g; f++)
	{
		y[f] = rand() % 7;
		cout << *(py + f) << " ";
	}
	cout << endl;
	for (int z = 0; z < n; z++)
	{
		for (int f = 0; f < g; f++)
		{
			if (*(px + z) == *(py + f))
			{
				iter = iter + 1;
				cout << z + 1 << " элемент массива X равен " << f + 1 << "элементу массива Y" << endl;
			}
		}
	}
	cout << "Количество пар элементов: " << iter << endl << endl;

	//--2--
	const int size = 20;
	int arr[size]{}, q = 0;
	int* pq;
	pq = &q;
	for (int k = 0; k < size; k++)
		arr[k] = 1 + rand() % 99;
	cout << "Введите число: ";
	cin >> *pq;
	for (int k = 0; k < size; k++)
		cout << arr[k] << " ";
	cout << endl;
	for (int k = 0; k < size - 1; k++)
	{
		for (int l = 0; l < size - k - 1; l++)
		{
			if (arr[l] > *pq && arr[l + 1] < *pq)
			{
				arr[l] = arr[l] + arr[l + 1];
				arr[l + 1] = arr[l] - arr[l + 1];
				arr[l] = arr[l] - arr[l + 1];
			}
		}
	}
	for (int k = 0; k < size; k++)
		cout << arr[k] << " ";
	cout << endl << endl;
}