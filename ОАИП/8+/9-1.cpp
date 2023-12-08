#include <iostream>
int main()
{
	using namespace std;
	int i = 0;
	double y[5] = { 3, -2, 0.9, 0.5, 1 }, p = 10, q, x = 1;
	while (i < 5)
	{
		if (y[i] < p) 
			p = y[i];
		x *= (y[i] - 5);
		cout << "x = " << x << endl;
		i++;
	}
	cout << endl;
	cout << "p = " << p << endl;
	q = x + p;
	cout << "q = " << q;
}