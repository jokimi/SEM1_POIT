#include "case2.h"
#include <iostream>
using namespace std;
int case2()
{
	setlocale(LC_ALL, "Russian");
	char r1, r2;
	float r = 0.0;
	int n;
	cout << "Количество пар символов: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Введите русскую прописную букву: "; cin >> r1;
		cout << "Введите русскую строчную букву: "; cin >> r2;
		r2 = r1 - 'a' + 'A';
		cout << "Разница = " << int('a' - 'A') << endl;
	}
	return 0;
}