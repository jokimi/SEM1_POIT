#include <iostream>
#include <iomanip>
using namespace std;
void write(int**, int*, int*);
void fill(int**, int*, int*, int);
int find_positive_string(int**, int*, int*);
int sum(int**, int, int*);
void reduce(int**, int*, int*, int);
int main()
{
	setlocale(LC_ALL, "");
	int** matrix;
	int strings, columns;
	cout << "Количество строк матрицы: "; cin >> strings;
	cout << "Количество столбцов матрицы: "; cin >> columns;
	matrix = new int* [strings];
	for (int i = 0; i < strings; i++) matrix[i] = new int[columns];
	fill(matrix, &strings, &columns, 100);
	write(matrix, &strings, &columns);
	if (find_positive_string(matrix, &strings, &columns) != -1)
	{
		reduce(matrix, &strings, &columns, sum(matrix, find_positive_string(matrix, &strings, &columns), &columns));
		cout << "Обновленная матрица: ";
		write(matrix, &strings, &columns);
	}
	for (int i = 0; i < strings; i++) delete[] matrix[i];
	delete[] matrix;
}
void write(int** matrix, int* str, int* col)
{
	cout << endl;
	for (int i = 0; i < *str; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			cout << setw(4) << matrix[i][j] << " ";
		}
		cout << endl;

	}
	cout << endl;
}
void fill(int** matrix, int* str, int* col, int max_value)
{
	srand(time(0));
	for (int i = 0; i < *str; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			matrix[i][j] = (rand() - (RAND_MAX / 4)) % max_value;
		}
	}
}
int find_positive_string(int** matrix, int* str, int* col)
{
	bool cond;
	for (int i = 0; i < *str; i++)
	{
		cond = true;
		for (int j = 0; j < *col; j++)
		{
			if (matrix[i][j] < 0) cond = false;
		}
		if (cond) return i;
	}
	return -1;
}
int sum(int** matrix, int str, int* col)
{
	int sum = 0;
	for (int i = 0; i < *col; i++)
	{
		sum += matrix[str][i];
	}
	return sum;
}
void reduce(int** matrix, int* str, int* col, int sum)
{
	for (int i = 0; i < *str; i++)
	{
		for (int j = 0; j < *col; j++)
		{
			matrix[i][j] -= sum;
		}
	}
}