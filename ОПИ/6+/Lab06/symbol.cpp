#include "symbol.h"
#include <iostream>
using namespace std;
int symbol()
{
	setlocale(LC_ALL, "Russian");
	int k;
	puts("�������� ��������: \n1 � ����������� ������� �������� ����� � Windows-1251 ����� ���������� �������� � ��������� � �������� ���������; \n2 � ����������� ������� �������� ����� � Windows-1251 ����� �������� �������� � ��������� � �������� ���������; \n3 � ����� � ������� ���� �������, ���������������� ��������� �����; \n4 - ����� �� ���������.");
	cin >> k;
	return k;
}