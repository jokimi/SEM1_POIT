#include "symbol.h"
#include <iostream>
using namespace std;
int symbol() {
	setlocale(LC_ALL, "Russian");
	int k;
	puts("¬ведите количество октетов: 1 Ц 1 октет; 2 Ц 2 октета; 3 Ц 3 октета; 4 - 4 октета.");
	cin >> k;
	return k;
}