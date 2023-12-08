#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, k;
	cout << "Введите, самолётов сбил игрок: "; cin >> a;
	cout << "Введите, ракет сбил игрок: "; cin >> b;
	cout << "Введите, спутников сбил игрок: "; cin >> c;
	k = 50 * a + 100 * b + 200 * c;
	std::cout << "Score: " << k;
}