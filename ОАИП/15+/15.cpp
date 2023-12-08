﻿#include <iostream>
#include <ctime>
using namespace std;
void massiv();
void matrix();

int main(void)
{
	setlocale(LC_ALL, "RUS");
	massiv();
	matrix();
}
void massiv()
{
	const int N = 30;
	int sz;
	int counter = 0;
	int i, n = 0, imax = 0, count = 0, A[N]{};
	float sum = 0, max = 0, c;
	int last, index = 0;
	cout << ("Введите число С: ");
	cin >> c;
	srand((unsigned)time(NULL));
	int rmn = -10, rmx = 5;
	cout << "Введите размер массива: ";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << A[i] << endl;
	}

	for (i = 0; i < sz; i++)
		if (A[i] < c) {
			count++;
		}
	cout << ("Количество элементов меньших С: ") << count << endl;
	for (i = 0; i < sz; i++)
		if (A[i] > max)
		{
			max = A[i];
			imax = i;
		}
	cout << ("Максимальный элемент: ") << max << endl;
	for (i = 0; i < sz; i++)
	{
		if (A[i] < 0) {
			last = A[i];
			index = i;
		}
	}
	cout << ("Позиция последнего отрицательного элемента: ") << index + 1 << endl;
	for (i = index + 1; i < sz; i++) sum += int(A[i]);
	cout << ("Сумма элементов расположеных после отрицательного: ") << sum << endl;
	max = A[0];
	cout << endl;
}
void matrix()
{
	setlocale(LC_ALL, "RUS");
	const int N = 3;
	int mas[N][N]{};
	int i, j;
	srand((unsigned)time(NULL));
	int rmn = -3, rmx = 5;
	srand(time(NULL));
	cout << "Матрица: " << endl;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			mas[i][j] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
			cout << mas[i][j] << "\t";
		}
	}
	cout << "\n";
	int len = 0;
	for (int i = 0; i < N; i++)
	{
		int k = 0;
		for (int j = 0; j < N; j++)
			if (mas[i][j] == 0)
				k++;
		if (k > 0)
			len++;
	}
	if (len > 0)
	{
		cout << "Количество строк с 0-элементом: " << len;
	}
	else {
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				if (mas[i][j] < 0)
				{
					mas[i][j] = 0;
				}
				cout << mas[i][j] << "\t";
			}
			cout << "\n";
		}
	}
	cout << endl;
}