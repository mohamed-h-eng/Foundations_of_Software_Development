#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
	Person p("mohamed",24);
	cout << "name: "<< p.get_name() << endl;
	cout << "age: " << p.get_age() << endl;
}

