#include "symbol.h"
#include <iostream>
#include "symbol_1.h"
using namespace std;
int symbol_1()
{
	setlocale(LC_ALL, "Russian");
	int m;
	puts("�������� ��� ������ �����? (1 � ��������; 2 � ������ �����)");
	cout << "��� �����: "; cin >> m;
	return m;
}