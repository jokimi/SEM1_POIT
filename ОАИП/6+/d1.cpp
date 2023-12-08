#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int p, q;
    int c(1);
    int pr(3);
    cout << "Выручка в первый день: "; cin >> p;
    cout << "План: "; cin >> q;
    while (q > p)
    {
        p += (p * (pr / 100));
        pr += 3;
        c++;
    }
    cout << "Выручка через некоторое время: " << p << endl;
    cout << "Потребовалось времени: " << c << " дней";
    return 0;
}