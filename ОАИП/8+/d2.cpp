#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    const int n = 10;
    int u[n]{}, m;
    for (int i = 0; i < n; i++)
    {
        cout << "Введите " << i + 1 << " число: "; cin >> u[i];
        if (u[i] < 0)
            m = i;
    }
    cout << "Номер последнего отрицательного элемента: " << m + 1 << endl;
    return 0;
}