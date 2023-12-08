#include "case3.h"
#include <iostream>
#include <conio.h>
using namespace std;
int case3() {
    setlocale(LC_ALL, "Russian");
    char a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

    printf("Первый октет - 1110");
    a = _getch(); putchar(a);
    b = _getch(); putchar(b);
    c = _getch(); putchar(c);
    d = _getch(); putchar(d);
    cout << endl;
    
    printf("Второй октет - 10");
    e = _getch(); putchar(e);
    f = _getch(); putchar(f);
    g = _getch(); putchar(g);
    h = _getch(); putchar(h);
    i = _getch(); putchar(i);
    j = _getch(); putchar(j);
    cout << endl;
    
    printf("Третий октет - 10");
    k = _getch(); putchar(k);
    l = _getch(); putchar(l);
    m = _getch(); putchar(m);
    n = _getch(); putchar(n);
    o = _getch(); putchar(o);
    p = _getch(); putchar(p);

    return 0;
}