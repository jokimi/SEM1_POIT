#include <iostream>
#include <clocale>
#include "9.h"
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	char S[80];
	char S1[80];
	char SS1[160]{};
	int n;
	cout << "Введите первую строку S (не более 80 символов): ";
	cin.getline(S, 80);
	int lengthS = strlen(S);
	cout << "Введите вторую строку S1 (не более 80 символов): ";
	cin.getline(S1, 80);
	int lengthS1 = strlen(S1);
	int sum = lengthS + lengthS1;
	cout << "Введите место вставки подстроки S1 в строку S: ";
	cin >> n;
	int temp = n;
	if (n > lengthS)
	{
		cout << "Место вставки превышает длину строки S!";
	}
	else
	{
		for (int i = 0; i < sum; i++)
		{
			SS1[i] = S[i];
		}
		for (int i = 0; i < lengthS1; i++)
		{
			SS1[n] = S1[i];
			n++;
		}
		for (; n < sum; n++)
		{
			SS1[n] = S[temp];
			temp++;
		}
		for (int i = 0; i < sum; i++)
		{
			cout << SS1[i];
		}
	}
}