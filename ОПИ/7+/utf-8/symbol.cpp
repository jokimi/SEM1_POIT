#include "symbol.h"
#include <iostream>
using namespace std;
int symbol() {
	setlocale(LC_ALL, "Russian");
	int k;
	puts("������� ���������� �������: 1 � 1 �����; 2 � 2 ������; 3 � 3 ������; 4 - 4 ������.");
	cin >> k;
	return k;
}