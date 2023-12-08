#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, t, А[100][100]{};
	cout << "Введите число: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		t = i + 1;
		for (int j = 0; j < n; j++)
		{
			А[i][j] = t;
			t++;
			if (t > n)
				t = 1;
			cout << А[i][j] << " ";
		}
		cout << endl;
	}
}