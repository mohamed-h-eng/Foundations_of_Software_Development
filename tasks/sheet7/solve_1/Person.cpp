#include "Person.h"
#include <string>
using namespace std;

Person::Person(string pName, int pAge) {
	name = pName;
	age = pAge;
}
void Person::set_name(string pName) {
	name = pName;
}
void Person::set_age(int pAge) {
	age = pAge;
}
string Person::get_name() {
	return name;
}
int Person::get_age() {
	return age;
}