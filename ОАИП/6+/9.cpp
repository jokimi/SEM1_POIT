#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float s = 5.9, m = 6, f = 1.2e+3, c, h, y;
	for (int n = 0; n < 3; n++)
	{
		printf("Введите c: ");
		scanf_s("%f", &c);
		y = (s + c) / log(f) / exp(-5);
		h = (y - m) / log(y);
		printf("y = %5.2f\t", y);
		printf("h = %5.2f\n", h);
	}
}