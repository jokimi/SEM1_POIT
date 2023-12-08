#include "symbol.h"
#include <iostream>
using namespace std;
int symbol()
{
	setlocale(LC_ALL, "Russian");
	int k;
	puts("¬ыберите вид транспорта : 1 Ц такси; 2 Ц троллейбус");
	cout << "¬аш выбор: "; cin >> k;
	return k;
}