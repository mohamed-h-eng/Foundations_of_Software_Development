#include "PEmployee.h"

PEmployee::PEmployee() {
	initial_salary = 0;
}

PEmployee::PEmployee(string employee_name, double initial_salary) {
	person_data.set_name(employee_name);
}
void PEmployee::set_salary(double newSalary) {
	initial_salary = newSalary;
}
double PEmployee::get_salary() {
	return initial_salary;
}
void PEmployee::set_person_data(string pName, int pAge) {
	person_data.set_name(pName);
	person_data.set_age(pAge);
}

Person PEmployee::get_peron_data() {
	return person_data;
}