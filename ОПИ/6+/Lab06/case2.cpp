#include "case2.h"
#include <iostream>
using namespace std;
int case2()
{
	setlocale(LC_ALL, "Russian");
	char r1, r2;
	float r = 0.0;
	int n;
	cout << "���������� ��� ��������: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "������� ������� ��������� �����: "; cin >> r1;
		cout << "������� ������� �������� �����: "; cin >> r2;
		r2 = r1 - 'a' + 'A';
		cout << "������� = " << int('a' - 'A') << endl;
	}
	return 0;
}