#include <iostream>
using namespace std;
void main()
{
	float s = 5.9, m = 6, f = 1.2e+3, c = 0, h, y;
	while (c < 1)
	{
		y = (s + c) / log(f) / exp(-5);
		h = (y - m) / log(y);
		cout << "y=" << y << "\t";
		cout << " h=" << h << endl;
		c = c + 0.1;
	}
}