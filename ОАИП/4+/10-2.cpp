#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, k, x;
	cout << "Введите кол-во школьников: "; cin >> n;
	cout << "Введите кол-во яблок: "; cin >> k;
	x = k / n;
	if (x == 0 || x >= 5)
		cout << "Каждому школьнику достанется " << x << " яблок.";
    if (x==1)
		cout << "Каждому школьнику достанется " << x << " яблоко.";
	if (x == 2 || x == 3 || x == 4)
		cout << "Каждому школьнику достанется " << x << " яблока.";
}