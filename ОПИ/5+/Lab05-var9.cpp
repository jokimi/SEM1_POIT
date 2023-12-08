#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k, m;
	float c, p1, p2, p3, p4;
	puts("Выберите вид транспорта: 1 – такси; 2 – троллейбус");
	cout << "Ваш выбор: "; cin >> k;
	switch (k)
	{
	    case 1:
	    {
		    cout << "Введите стоимость пути от университета до дома: "; cin >> p1;
			puts("Ожидание или другое такси? (1 – ожидание; 2 – другое такси)");
			cout << "Ваш выбор: "; cin >> m;
			switch (m)
			{
			    case 1:
			    {
					cout << "Введите стоимость ожидания: "; cin >> p3;
					cout << "Введите стоимость пути от дома до цирка: "; cin >> p2;
					c = p1 + p2 + p3;
					printf("Стоимость поездки: %5.2f", c);
					break;
			    }
				case 2:
				{
					cout << "Введите стоимость пути от дома до цирка: "; cin >> p2;
					c = p1 + p2;
					printf("Стоимость поездки: %5.2f", c);
					break;
				}
			}
			break;
	    }
	    case 2:
	    {
			cout << "Введите стоимость билета на троллейбус: "; cin >> p4;
			c = 2 * p4;
			printf("Стоимость поездки: %5.2f", c);
		    break;
	    }
    default: break;
	}
	return 0;
}