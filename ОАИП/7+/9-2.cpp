#include <iostream>
#include <set>
using namespace std;
bool test(long i) // возвращает true, если цифры в числе не повторяются
{
    size_t c = 0;
    set <int> set;
    while (i) 
    {
        set.insert(i % 10);
        i /= 10;
        ++c;
    }
    return set.size() == c;
}
int main() 
{
    for (int i = 1000; i < 10000; ++i)
        if (test(i))
            cout << i << endl;
    return 0;
}