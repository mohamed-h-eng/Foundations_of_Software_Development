#pragma once
#include <string>
using namespace std;

class Employee
{
private:
	string name;
	double salary;
public:
	Employee();
	void set_name(string i_name);
	void set_salary(double i_salary);
	string get_name();
	double get_salary();
	//double get_bonus();

	virtual double calculateBonus()=0;
};

class Developer: public Employee {
private:
	double bonus;
public:
	Developer(string i_name, double i_salary, double i_bonus);
	double calculateBonus();
};

class Manager : public Employee {
private:
	double bonus;
public:
	Manager(string i_name, double i_salary, double i_bonus);
	double calculateBonus();
};

class Intern : public Employee {
private:
	double bonus;
public:
	Intern(string i_name, double i_salary, double i_bonus);
	double calculateBonus();
};

