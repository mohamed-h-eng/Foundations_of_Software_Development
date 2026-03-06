#pragma once
#include "Person.h"
class PEmployee
{
private:
	Person person_data;
	double initial_salary;
public:
	PEmployee();
	PEmployee(string employee_name, double initial_salary);
	void set_salary(double newSalary);
	double get_salary();
	void set_person_data(string pName, int pAge);
	Person get_peron_data();
};

