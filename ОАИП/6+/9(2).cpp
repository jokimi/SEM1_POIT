#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	float s, m = 6, f = 1.2e+3, c = 0.2, h, y;
	for (int n = 0; n < 3; n++)
	{
        printf("Введите s: ");
	    scanf_s("%f", &s);
		while (c < 0.6)
		{
			y = (s + c) / log(f) / exp(-5);
			h = (y - m) / log(y);
			cout << "c=" << c << "\t";
			cout << " y=" << y << "\t";
			cout << " h=" << h << endl;
			c = c + 0.1;
		}
		c = 0.2;
	}
}