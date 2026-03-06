#include <iostream>
# include "Person.h"
int main()
{
	Person* p1 = new Student("mohamed","16-6-2002","Law");
	p1->print();

	Person* p2 = new Instructor("mohamed", "16-6-2002", 20000);
	p2->print();
}