#include <iostream>
using namespace std;
void fill(int*, int*, int);
int define(int*, int*);
void writer(int*, int*);
int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
	int sz, * arr;
	cout << "Размер массива: ", cin >> sz;
	arr = new int[sz];
	fill(arr, &sz, 10);
	writer(arr, &sz);
	cout << endl << define(arr, &sz) << endl;
	delete[]arr;
}
void fill(int* arr, int* size, int max_value)
{
	for (int i = 0; i < *size; i++) arr[i] = rand() % (max_value);
}
int define(int* arr, int* size)
{
	int sum = 0, first = -1, last = -1;
	for (int i = 0; i < *size; i++) if (arr[i] == 0)
	{
		first = i;
		break;
	}
	for (int i = *size; i > first; i--) if (arr[i] == 0)
	{
		last = i;
		break;
	}
	if (first != -1 && last != -1)
	{
		for (int i = first; i < last; i++) sum += arr[i];
		return sum;
	}
	else
		return 0;
}
void writer(int* arr, int* size)
{
	cout << endl;
	for (int i = 0; i < *size; i++) cout << arr[i] << " ";
	cout << endl;
}