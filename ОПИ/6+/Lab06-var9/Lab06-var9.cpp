#include <iostream>
#include "symbol.h"
#include "case1.h"
#include "case2.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int k = symbol();
    switch (k)
    {
        case 1: case1(); break;
        case 2: case2(); break;
        default: break;
        return 0;
    }
}