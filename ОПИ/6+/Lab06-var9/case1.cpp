#include "case1.h"
#include <iostream>
#include "symbol_1.h"
#include "case1_1.h"
#include "case1_2.h"
using namespace std;
int case1()
{
	setlocale(LC_CTYPE, "Russian");
	int m = symbol_1();
	switch (m)
	{
	    case 1: case1_1(); break;
	    case 2: case1_2(); break;
	    default: break;
		return 0;
	}
	return 0;
}