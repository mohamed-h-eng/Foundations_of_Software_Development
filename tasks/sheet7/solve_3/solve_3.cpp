// solve_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Address.h"
using namespace std;

int main()
{
	Address a(12,"omar ibn elkhatab",32,"Attaba","Cairo",1456);
	Address b(12, "omar ibn elkhatab", 32, "Attaba", "Cairo", 1454);
	a.print();
	cout << endl << a.comes_before(b);
}
