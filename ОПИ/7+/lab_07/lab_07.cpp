#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k;
	char bigLatin, smallLatin, bigRussian, smallRussian, number;
	int resultLatin, resultRussian, resultNumber;
	puts("Выберите действие: \n1 – определение разницы значений кодов в Windows-1251 буквы латинского алфавита в прописном и строчном написании; \n2 – определение разницы значений кодов в Windows-1251 буквы русского алфавита в прописном и строчном написании; \n3 – вывод в консоль кода символа, соответствующего введенной цифре; \n4 - выход из программы");
	cout << "Ваш выбор: "; cin >> k;
	switch (k) {
	case 1: {
		cout << "Введите латинскую прописную букву: "; cin >> bigLatin;
		cout << "Введите латинскую строчную букву: "; cin >> smallLatin;
		resultLatin = smallLatin - bigLatin;
		cout << "Разница = " << resultLatin << endl;
		break;
	}
	case 2: {
		cout << "Введите русскую прописную букву: "; cin >> bigRussian;
		cout << "Введите русскую строчную букву: "; cin >> smallRussian;
		resultRussian = smallRussian - bigRussian;
		cout << "Разница = " << resultRussian << endl;
		break;
	}
	case 3: {
		cout << "Введите цифру: "; cin >> number;
		resultNumber = number;
		cout << "Код символа: " << hex << int(resultNumber);
		break;
	}
	case 4: {
		break;
	}
	default: break;
	}
	return 0;
}