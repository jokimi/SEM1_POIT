#include <iostream>
#include <stdio.h>
#include <conio.h>
constexpr auto N = 2;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int A[2 * N][2 * N]{}, B1[N][N]{}, B2[N][N]{}, B3[N][N]{}, B4[N][N]{}, i, j, k, m;
    printf("Введите массив:\n");
    for (i = 0; i < 2 * N; i++)
    {
        for (j = 0; j < 2 * N; j++)
        {
            printf("A[%d][%d]  =  ", i + 1, j + 1);
            scanf_s("%d", &A[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 2 * N; i++)
    {
        for (j = 0; j < 2 * N; j++)
            printf("%d   ", A[i][j]);
        printf("\n");
    }

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            B1[i][j] = A[i][j];
    for (i = 0;i < N;i++)
        for (j = N, m = 0; j < 2 * N; j++, m++)
            B2[i][m] = A[i][j];
    for (i = N, k = 0; i < 2 * N; i++, k++)
        for (j = N, m = 0; j < 2 * N; j++, m++)
            B3[k][m] = A[i][j];
    for (i = N, k = 0; i < 2 * N; i++, k++)
        for (j = 0; j < N; j++)
            B4[k][j] = A[i][j];

    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            A[i][j] = B3[i][j];
    for (i = 0; i < N; i++)
        for (j = N, k = 0;j < 2 * N;j++, k++)
            A[i][j] = B4[i][k];
    for (i = N, k = 0; i < 2 * N; i++, k++)
        for (j = N, m = 0; j < 2 * N; j++, m++)
            A[i][j] = B1[k][m];
    for (i = N, k = 0; i < 2 * N; i++, k++)
        for (j = 0; j < N; j++)
            A[i][j] = B2[k][j];

    printf("\nИзмененный массив:\n");
    for (i = 0; i < 2 * N; i++)
    {
        for (j = 0; j < 2 * N; j++)
            printf("%d   ", A[i][j]);
        printf("\n");
    }
    return 0;
}