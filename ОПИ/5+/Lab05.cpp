#include <iostream>
#include <windows.h>
using namespace std;
int main() 
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	char c;
	int c1, c4;
	puts("Выберите действие: \n1 – определение разницы значений кодов в Windows-1251 буквы латинского алфавита в прописном и строчном написании; \n2 – определение разницы значений кодов в Windows-1251 буквы русского алфавита в прописном и строчном написании; \n3 – вывод в консоль кода символа, соответствующего введенной цифре; \n4 - выход из программы");
	cout << "Ваш выбор: "; cin >> k;
	switch (k)
	{
	    case 1:
		{
			cout << "Введите латинскую строчную букву: "; cin >> c;
		    if (int(c) > 96 && int(c) < 123)
				c1 = int(c) - 32;
		    else 
			{ 
				cout << "ERROR" << endl;
				break;
			}
		    cout << "Код символа " << c << " в Windows-1251 = " << hex << int(c) << ", код символа " << char(c1) << " - " << hex << c1 << ", разница между значениями - 32" << endl;
			break;
	    }
	    case 2:
		{
			cout << "Введите русскую строчную букву: "; cin >> c;
		    c4 = int(c) + 256;
		    if (c4 > 223 && c4 < 256)
				c1 = c4 - 32;
		    else
		    {
			    cout << "ERROR" << endl;
				break;
		    }
		    cout << "Код символа " << c << " в Windows-1251 = " << hex << int(c4) << ", код символа " << char(c1) << " - " << hex << int(c1) << ", разница между значениями - 32" << endl;
		    break;
	    }
	    case 3:
		{
			cout << "Введите цифру: "; cin >> c;
		    if (int(c) > 47 && int(c) < 58)
				cout << "Код символа: " << hex << int(c);
		    else cout << "ERROR";
		    break;
	    }
	case 4: {break;}
	default: break;
	}
	return 0;
}