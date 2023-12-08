#include <iostream>
#include <iomanip> 
using namespace std;
void main()
{
    setlocale(LC_CTYPE, "Russian");
    int a, b, c;
    cout << "Введите a: "; cin >> a;
    cout << "Введите b: "; cin >> b;
    cout << "Введите c: "; cin >> c;
    if (a % 5 == 0 && b % 5 == 0 && c % 5 == 0)
        cout << "Сумма = " << a + b + c;
    else if (a % 5 == 0 && b % 5 == 0)
        cout << "Сумма = " << a + b;
    else if (a % 5 == 0 && c % 5 == 0)
        cout << "Сумма = " << a + c;
    else if (b % 5 == 0 && c % 5 == 0)
        cout << "Сумма = " << b + c;
    else if (a % 5 == 0)
        cout << "Сумма = " << a;
    else if (b % 5 == 0)
        cout << "Сумма = " << b;
    else if (c % 5 == 0)
        cout << "Сумма = " << c;
    else
        cout << "ERROR";
}