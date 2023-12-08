#include <iostream>
#include <ctime>
using namespace std;
int negate(int h)
{
	return -h;
}
void main()
{
	setlocale(LC_ALL, "RUS");
	int** a, i, j, row, col, k = 0, n = 0;
	cout << "Кол-во строк: ";
	cin >> row;
	cout << "Кол-во колонок: ";
	cin >> col;
	srand((unsigned)time(NULL));
	a = new int* [row];
	for (i = 0; i < row; i++)
	{
		a[i] = new int[col];
		for (j = 0; j < col; j++)
		{
			*(a[i] + j) = rand() % 20 - 5;
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << *(a[i] + j) << " ";
		}
		cout << endl;
	}
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row; i++)
		{
			if (*(a[i] + j) > 0)
			{
				n++;
				if (n > row) k = 0;
				if (n == row) break;
			}
		}
		if (n == row)
		{
			break;
		}
	}
	for (i = 0; i < row; i++)
	{
		*(a[i] + (j - 1)) = negate(*(a[i] + (j - 1)));
	}
	k = 0;
	cout << endl;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << *(a[i] + j) << " ";
		}
		cout << endl;
	}
}