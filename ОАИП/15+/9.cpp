﻿#include <ctime>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand((unsigned)time(NULL));
	int size, i = 0;
	float* A, p = 1, sum = 0, min = 100, count = 0;
	cout << "Введите размер массива: ";
	cin >> size;
	if (!(A = (float*)malloc(size * sizeof(int))))
	{
		puts("Not enough memory");
		return 0;
	}
	A = new float[size];
	for (i = 0; i < size; i++)
	{
		A[i] = 0.01 * (rand() % 10000) - 65;
		cout << A[i] << endl;
		if (A[i] > 0)
		{
			p *= A[i];
		}
		if (A[i] < min)
		{
			min = A[i];
			count = i;
		}
	}
	for (i = 0; i < count; i++)
	{
		sum += A[i];
	}
	cout << "Произведение положительных элементов: " << p << "\n";
	cout << "Сумма элементов до минимального элемента: " << sum << "\n";
	free(A);
}