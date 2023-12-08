#include "case1.h"
#include <iostream>
#include <conio.h>
using namespace std;
int case1() {
	setlocale(LC_CTYPE, "Russian");
	char a, b, c, d, e, f, g;

    printf("Первый октет - 0");
    a = _getch(); putchar(a);
    b = _getch(); putchar(b);
    c = _getch(); putchar(c);
    d = _getch(); putchar(d);
    e = _getch(); putchar(e);
    f = _getch(); putchar(f);
    g = _getch(); putchar(g);

	return 0;
}