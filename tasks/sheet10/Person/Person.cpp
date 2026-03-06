#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

Person::Person() {
	name = "";
	dob="";
}

void Person::set_name(string i_name) {
	name = i_name;
}
void Person::set_dob(string i_dob) {
	dob = i_dob;
}
string Person::get_name() {
	return name;
}
string Person::get_dob() {
	return dob;
}

Student::Student(string i_name, string i_dob, string i_major) {
	set_name(i_name);
	set_dob(i_dob);
	major = i_major;
}
string Student::get_major() {
	return major;
}

void Student::print() {
	cout << "\nname: " << get_name();
	cout << "\nDate of birth: " << get_dob();
	cout << "\nmajor: " << major << endl;
}



Instructor::Instructor(string i_name, string i_dob, float i_salary) {
	set_name(i_name);
	set_dob(i_dob);
	salary = i_salary;
}
float Instructor::get_salary() {
	return salary;
}

void Instructor::print() {
	cout << "\nname: " << get_name();
	cout << "\nDate of birth: " << get_dob();
	cout << "\nsalary: " << salary << endl;

}

