#include "case1.h"
#include <iostream>
using namespace std;
int case1()
{
	setlocale(LC_CTYPE, "Russian");
	char l1, l2;
	float l = 0.0;
	int n;
	cout << "���������� ��� ��������: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "������� ��������� ��������� �����: "; cin >> l1;
		cout << "������� ��������� �������� �����: "; cin >> l2;
		int(l) = abs(int(l1) - int(l2));
		cout << "������� = " << int(l) << endl;
	}
	return 0;
}