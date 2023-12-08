#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int i, j, M[30]{}, x, k, count = 0;
    cout << "Введите размер массива: "; cin >> k;
    cout << "Массив: " << endl;
    for (i = 1; i <= k; i++)
    {
        scanf_s("%d", &x);
        M[i] = x;
    }
    cout << endl;

    for (i = 0; i < k; i++)
    {
        count = 1;
        for (j = i + 1; j <= k; j++)
        {
            if (M[i] == M[j] && M[i] != '\0')
            {
                count++;
                M[j] = '\0';
            }
        }
        if (M[i] != '\0')
        {
            printf("%d повторяется %d раз(-а).\n", M[i], count);
        }
    }

    return 0;
}