#include "symbol.h"
#include <iostream>
using namespace std;
int symbol()
{
	setlocale(LC_ALL, "Russian");
	int k;
	puts("�������� ��� ���������� : 1 � �����; 2 � ����������");
	cout << "��� �����: "; cin >> k;
	return k;
}