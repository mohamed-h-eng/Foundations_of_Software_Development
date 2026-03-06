#include "Student.h"

Student::Student(string i_name) {
	name = i_name;
	total_score = 0;
	quiz_num = 0;
}
string Student::get_name() {
	return name;
}
void Student::add_quiz(double score) {
	total_score += score;
	quiz_num++;
}
double Student::get_total_score() {
	return total_score;
}
double Student::get_average() {
	return total_score/quiz_num;
}