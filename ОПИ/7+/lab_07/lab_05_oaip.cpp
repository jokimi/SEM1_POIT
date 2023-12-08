#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");

	//"Форматированный способ:/
	float nominator, denominator, decimal;
	printf("Введите a: "); scanf_s("%f", &nominator);
	printf("Введите b: "); scanf_s("%f", &denominator);
	cout << "Дробь: " << nominator << "/" << denominator << endl;
	decimal = nominator / denominator;
	if (decimal >= 1) {
		printf("Дробь неправильная");
	}
	else {
		printf("Дробь правильная");
	}

	cout << endl;

	//Потоковый способ:
	cout << "Введите a: "; cin >> nominator;
	cout << "Введите b: "; cin >> denominator;
	cout << "Дробь: " << nominator << "/" << denominator << endl;
	decimal = nominator / denominator;
	decimal >= 1 ?
		cout << ("Дробь неправильная") :
		cout << ("Дробь правильная");
}