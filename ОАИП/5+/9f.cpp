#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	float a, b, c;
	printf("Введите a: "); scanf_s("%f", &a);
	printf("Введите b: "); scanf_s("%f", &b);
	std::cout << "Дробь: " << a << "/" << b << std::endl;
    c = a / b;
	if (c >= 1)
		printf("Дробь неправильная");
	else
		printf("Дробь правильная");
}