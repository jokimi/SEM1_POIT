#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");

    //--1--
    int a;
    float i, j;
    char tmp[33];
    cout << "Введите число: "; cin >> a;
    i = a / 2.0;
    cout << "Число после деления на 2: " << i << endl;
    j = a >> 1;
    cout << "Число после сдвига вправо: " << j << endl;
    if (i == j) 
    {
        cout << "Число кратно 2" << endl << endl;
    }
    else
    {
        cout << "Число не кратно 2" << endl << endl;
    }
    _itoa_s(a, tmp, 2);
    cout << "Число в двоичной системе счисления: " << tmp << endl << endl;

    //--2--
    int A, p, n;
    char tmps[33];
    cout << "Введите A: "; cin >> A;
    _itoa_s(A, tmps, 2);
    cout << tmps << endl;
    cout << "С какой позиции начать замену: "; cin >> p;
    cout << "Сколько битов нужно заменить на 0: "; cin >> n;
    unsigned int mask = (1 << n) - 1;
    A &= ~(mask << (p - 1));
    _itoa_s(A, tmps, 2);
    cout << "Итог: " << tmps << endl;
}