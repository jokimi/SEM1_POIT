#include <iostream>
#include "case1_1.h"
using namespace std;
int case1_1()
{
	setlocale(LC_CTYPE, "Russian");
	float c, p1, p2, p3;
	cout << "������� ��������� ���� �� ������������ �� ����: "; cin >> p1;
	cout << "������� ��������� ��������: "; cin >> p3;
	cout << "������� ��������� ���� �� ���� �� �����: "; cin >> p2;
	c = p1 + p2 + p3;
	printf("��������� �������: %5.2f", c);
	return 0;
}