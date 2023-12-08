#include <iostream>
int main()
{
	using namespace std;
	int i = 1;
	double x[6] = {1.1, 6.2, 3, -4, 6, 1 }, p = 10, q, y = 0, t = 0.45;
	while (i < 7)
	{
		y += ((x[i] + 1) / x[i]);
		cout << "y = " << y << endl;
		i = i + 1;
	}
	cout << endl;
	q = t + y;
	cout << "q = " << q;
}