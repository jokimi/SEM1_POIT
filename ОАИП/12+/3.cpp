#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	//--1--
	int n, s1 = 0, s2 = 0, i = 0;
	cout << "Введите количество элементов массива: "; cin >> n;
	float* a = new float[n];
	float* aa = new float[n];
	float* pa, * paa, t;
	cout << "Заполните массив A: " << endl;
	for (pa = a; pa < a + n; pa++)
	{
		cout << "a[" << i + 1 << "] = "; cin >> *(pa + 1);
		i++;
	}
	cout << "Заполните массив B: " << endl;
	i = 0;
	for (paa = aa; paa < aa + n; paa++)
	{
		cout << "b[" << i + 1 << "] = "; cin >> *(paa + 1);
		i++;
	}
	cout << "Значения массива должны быть меньше ";
	cin >> t;
	for (pa = a; pa < a + n; pa++)
	{
		if (*(pa + 1) < t) s1++;
	}
	for (paa = aa; paa < aa + n; paa++)
	{
		if (*(paa + 1) < t) s2++;
	}
	if (s1 > s2)
	{
		cout << "a[" << n << "] = { ";
		for (pa = a; pa < a + n; pa++)
			cout << *(pa + 1) << " ";
		cout << "}" << endl;
		cout << "b[" << n << "] = { ";
		for (paa = aa; paa < aa + n; paa++)
			cout << *(paa + 1) << " ";
		cout << "}" << endl;
	}
	else
	{
		cout << "b[" << n << "] = { ";
		for (paa = aa; paa < aa + n; paa++)
			cout << *(paa + 1) << " ";
		cout << "}" << endl;
		cout << "a[" << n << "] = { ";
		for (pa = a; pa < a + n; pa++)
			cout << *(pa + 1) << " ";
		cout << "}" << endl;
	}

	//--2--
	int m, sz1 = 0, sz2 = 0, sz3 = 0, h = 0, j = 0;
	cout << "Введите количество элементов массива: "; cin >> m;
	float* c = new float[m];
	float* b = new float[m];
	float* pc, * pb, k = 0.0;
	cout << "Заполните массив A: " << endl;
	for (pc = c; pc < c + m; pc++)
	{
		cout << "c[" << h << "] = "; cin >> *(pc + 1);
		h++;
	}
	cout << "Заполните массив B: " << endl;
	h = 0;
	for (pb = b; pb < b + m; pb++)
	{
		cout << "b[" << h << "] = "; cin >> *(pb + 1);
		h++;
	}
	h = 0;
	for (pc = c; pc < c + m; pc++)
	{
		j = 0;
		for (pb = b; pb < b + m; pb++)
		{
			if (h == j)
			{
				if (*(pc + 1) < (*(pb + 1))) sz1++;
				if (*(pc + 1) > (*(pb + 1))) sz2++;
				if (*(pc + 1) == (*(pb + 1))) sz3++;
			}
			j++;
		}
		h++;
	}
	cout << "Количество таких чисел k, для которых c[k] < b[k] = " << sz1 << endl;
	cout << "Количество таких чисел k, для которых c[k] > b[k] = " << sz2 << endl;
	cout << "Количество таких чисел k, для которых c[k] = b[k] = " << sz3 << endl;
}