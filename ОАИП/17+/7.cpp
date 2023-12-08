#include <iostream>
#include <stdlib.h>
#include <time.h>
void printArray(int[], const int);
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int size = 15;
	int massiv[size]{};
	int sumChet = 0, sumNechet = 0, sum = 0, proizv1 = 1, proizv2 = 1;
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		massiv[i] = 1 + rand() % 200;
	printArray(massiv, size);
	for (int i = 0; i < size; i++)
	{
		if (i == 2 || i == 7)
			proizv2 *= massiv[i];
	}
	cout << "Результат: " << proizv2 << endl;
	return 0;
}
void printArray(int a[], const int s)
{
	for (int k = 0; k < s; k++)
		cout << a[k] << " ";
	cout << endl;
}