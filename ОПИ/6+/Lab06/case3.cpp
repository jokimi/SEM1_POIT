#include "case3.h"
#include <iostream>
using namespace std;
int case3()
{
	setlocale(LC_ALL, "Russian");
	char c;
	float s;
	int n;
	cout << "���������� ��������: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "������� �����: "; cin >> c;
		s = c;
		cout << "��� �������: " << hex << int(s) << endl;
	}
	return 0;
}