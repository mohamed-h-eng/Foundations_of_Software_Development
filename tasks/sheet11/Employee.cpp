#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee() {
	name = "";
	salary= 0.0;
}
void Employee::set_name(string i_name) {
	name = i_name;
}
void Employee::set_salary(double i_salary) {
	salary = i_salary;
}

string Employee::get_name() {
	return name;
}
double Employee::get_salary() {
	return salary;
}

Developer::Developer(string i_name, double i_salary, double i_bonus) {
	set_name(i_name);
	set_salary(i_salary);
	bonus = i_bonus;
}
double Developer::calculateBonus() {
	return get_salary() * (bonus/100);
}

Manager::Manager(string i_name, double i_salary, double i_bonus) {
	set_name(i_name);
	set_salary(i_salary);
	bonus = i_bonus;
}
double Manager::calculateBonus() {
	return get_salary() * (bonus / 100);
}

Intern::Intern(string i_name, double i_salary, double i_bonus) {
	set_name(i_name);
	set_salary(i_salary);
	bonus = i_bonus;
}
double Intern::calculateBonus() {
	return get_salary() * (bonus / 100);
}