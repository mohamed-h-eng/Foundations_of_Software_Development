#include <iostream>
#include "PEmployee.h"
using namespace std;

int main()
{
	PEmployee p;
	p.set_person_data("mohamed",24);
	p.set_salary(50000);
	cout << "name: " << p.get_peron_data().get_name() << endl;
	cout << "age: " << p.get_peron_data().get_age() << endl;
	cout << "salary: " << p.get_salary();

}

