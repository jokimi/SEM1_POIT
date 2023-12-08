#include <iostream>
#include <stdio.h> 
#include <math.h> 
void main()
{
    setlocale(LC_CTYPE, "Russian");
    float c1, c2;
    int i = 1;
    printf("Введите количество воды в первом сосуде (л): "); scanf_s("%f", &c1);
    printf("Введите количество воды в втором сосуде (л): "); scanf_s("%f", &c2);
    while (i <= 6)
    {
        c1 /= 2;
        c2 += c1;
        c2 /= 2;
        c1 += c2;
        i++;
    }
    printf("%5.2f\t%5.2f", c1, c2);
}