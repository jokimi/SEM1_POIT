#include <iostream>
#include "case1_2.h"
using namespace std;
int case1_2()
{
	setlocale(LC_CTYPE, "Russian");
	float c, p1, p2;
	cout << "������� ��������� ���� �� ������������ �� ����: "; cin >> p1;
	cout << "������� ��������� ���� �� ���� �� �����: "; cin >> p2;
	c = p1 + p2;
	printf("��������� �������: %5.2f", c);
	return 0;
}