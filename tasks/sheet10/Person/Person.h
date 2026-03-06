
#pragma once
#include <string>
using namespace std;

class Person
{
private:
	string name;
	string dob;
public:
	Person();
	void set_name(string i_name);
	void set_dob(string i_dob);
	string get_name();
	string get_dob();
	virtual void print()=0;
};


class Student : public Person
{
private:
	string major;
public:
	Student(string i_name, string i_dob, string major);
	string get_major();
	void print();
};


class Instructor : public Person
{
private:
	float salary;
public:
	Instructor(string i_name, string i_dob, float salary);
	float get_salary();
	void print();
};