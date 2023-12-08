#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");

    //--1--
    int N = 9;
    int* arr = new int[N];
    arr[0] = 24;
    arr[1] = 12;
    arr[2] = 18;
    arr[3] = 6;
    arr[4] = 36;
    arr[5] = 96;
    arr[6] = 54;
    arr[7] = 72;
    arr[8] = 48;
    cout << "Массив: ";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] > arr[j])
            {
                int buff = arr[i];
                arr[i] = arr[j];
                arr[j] = buff;
            }
        }
    }
    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] % arr[j] != 0)
            {
                for (int k = j; k < N - 1; k++)              
                    arr[k] = arr[k + 1];
                N--;     
            }
        }
    }
    cout << "Результат: ";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    delete[] arr;
    cout << endl << endl;

    //--2--
    const int msz = 100;
    int A[msz]{}, B[msz]{};
    int min = 999, *pmin, mn = 0, mx = 99, tmp = 0, n, m;
    int z;
    pmin = &min;
    cout << "Размер массива A: "; cin >> n;
    cout << "Массив A: ";
    srand((unsigned)time(NULL));
    for (z = 0; z < n; z++)
    {
        A[z] = (int)(((double)rand() / (double)RAND_MAX) * (mx - mn) + mn);
        cout << A[z] << " ";
        if (*pmin > A[z])
            *pmin = A[z];
    }
    cout << endl;
    cout << "Минимальный элемент массива A = " << *pmin << endl;
    cout << "Размер массива B: "; cin >> m;
    cout << "Массив B: ";
    srand((unsigned)time(NULL));
    for (z = 0; z < m; z++)
    {
        B[z] = (int)(((double)rand() / (double)RAND_MAX) * (mx - mn) + mn);
        cout << B[z] << " ";
        if (B[z] == *pmin)
            tmp++;
    }
    cout << endl;
    if (tmp > 0)
        cout << "Минимальный элемент массива A найден в массиве B" << endl;
    else
        cout << "Минимальный элемент массива A не найден в массиве B" << endl;
}