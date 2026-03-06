#pragma once
#include <string>
using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person();
	Person(string pName, int pAge);
	void set_name(string pName);
	void set_age(int pAge);
	string get_name();
	int get_age();
};

