#include <iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
    setlocale(LC_CTYPE, "Russian");
    double a, b, p, q, r, s;
    cout << "Введите a: "; cin >> a;
    cout << "Введите b: "; cin >> b;
    cout << "Введите p: "; cin >> p;
    cout << "Введите q: "; cin >> q;
    cout << "Введите r: "; cin >> r;
    cout << "Введите s: "; cin >> s;
    printf(
        (a >= p && a >= r && b >= (q + s)) || // Дома стоят вдоль b (4 варианта)
        (a >= q && a >= r && b >= (p + s)) ||
        (a >= p && a >= s && b >= (q + r)) ||
        (a >= q && a >= s && b >= (p + r)) ||
        (b >= p && b >= r && a >= (q + s)) || // Дома стоят вдоль a (4 варианта)
        (b >= q && b >= r && a >= (p + s)) ||
        (b >= p && b >= s && a >= (q + r)) ||
        (b >= q && b >= s && a >= (p + r)) ? 
             "Можно разместить 2 дома" : "Нельзя разместить 2 дома");
}