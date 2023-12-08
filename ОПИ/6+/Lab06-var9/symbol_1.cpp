#include "symbol.h"
#include <iostream>
#include "symbol_1.h"
using namespace std;
int symbol_1()
{
	setlocale(LC_ALL, "Russian");
	int m;
	puts("ќжидание или другое такси? (1 Ц ожидание; 2 Ц другое такси)");
	cout << "¬аш выбор: "; cin >> m;
	return m;
}