#include "case2.h"
#include <iostream>
#include <conio.h>
using namespace std;
int case2() {
	setlocale(LC_ALL, "Russian");
	char a, b, c, d, e, f, g, h, i, j, k;

    printf("Первый октет - 110");
    a = _getch(); putchar(a);
    b = _getch(); putchar(b);
    c = _getch(); putchar(c);
    d = _getch(); putchar(d);
    e = _getch(); putchar(e);
    cout << endl;

    printf("Второй октет - 10");
    f = _getch(); putchar(f);
    g = _getch(); putchar(g);
    h = _getch(); putchar(h);
    i = _getch(); putchar(i);
    j = _getch(); putchar(j);
    k = _getch(); putchar(k);

	return 0;
}