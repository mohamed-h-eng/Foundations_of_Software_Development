#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	Student s("mohamed");
	s.add_quiz(14);
	s.add_quiz(12.5);
	s.add_quiz(17.2);

	cout << "name: " << s.get_name() << endl;
	cout << "total score: " << s.get_total_score() << endl;
	cout << "avcerage score: " << s.get_average();
}
