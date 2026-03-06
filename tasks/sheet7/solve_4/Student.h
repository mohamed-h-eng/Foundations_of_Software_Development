#pragma once
#include<string>
using namespace std;

class Student
{
private:
	string name;
	double total_score;
	int quiz_num;
public:
	Student(string i_name);
	string get_name();
	void add_quiz(double score);
	double get_total_score();
	double get_average();
};

