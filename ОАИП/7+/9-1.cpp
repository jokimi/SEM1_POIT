#include <stdio.h>
#include <cmath>
int main()
{
	float f = -125e-6, y = 1.7, t = 1, d, c;
	while (t < 2.1)
	{
		c = 2 * sin(f / 2) + log(t);
		if (c >= 3)
			d = y * exp(-2 * t) + f;
		else if (c < 3)
			d = y - pow(y, 3);
		printf("t = %5.2f\t", t);
		printf("c = %5.2f\t", c);
		printf("d = %5.2f\n", d);
		t = t + 0.1;
	}
}