#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    for (int i = 1000; i < 10000; i++)
    {
        if ((i % 2 == 0) && (i % 7 == 0) && (i % 11 == 0))
        {
            int s = 0, t = i;
            while (t > 0)
            {
                s = s + (t % 10);
                t = t / 10;
            }
            if (s == 30)
            {
                int d = 0;
                string n = to_string(i);
                for (int a = 0; a < 4; a++)
                {
                    int c = 0;
                    for (int b = a + 1; b < 4; b++)
                    {
                        if (n[a] == n[b]) c++;
                    }
                    if (c > 0) d++;
                }
                if (d == 2) 
                    cout << "Номер машины: " << i;
            }
        }
    }
}