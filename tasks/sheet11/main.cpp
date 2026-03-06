#include <iostream>
#include <vector>
#include "Animal.h"
#include "Employee.h"
#include "Notification.h"
using namespace std;

int main()
{
	//vector <Animal*> a1;
	//a1.push_back(new Dog("Dog", "Bark"));
	//a1.push_back(new Cat("Cat", "Meow"));
	//a1.push_back(new Cow("Cow", "Mooo"));

	//for (int i = 0; i < a1.size(); i++)
	//{
	//	a1[i]->speak();
	//}
	
	//vector <Employee*> e1;
	//e1.push_back(new Developer("mohamed", 20000, 10));
	//e1.push_back(new Manager("ahmed", 80500.9, 10));
	//e1.push_back(new Intern("kareem", 10000, 10));

	//for (int i = 0; i < e1.size(); i++)
	//{
	//	cout << e1[i]->get_name() << ": " << e1[i]->calculateBonus() << '\n';
	//}

	vector <Notification*> n1;
	n1.push_back(new EmailNotification("Email","this is email notification"));
	n1.push_back(new SMSNotification("SMS", "this is sms notification"));
	n1.push_back(new PushNotification("Push", "this is push notification"));

	for (int i = 0; i < n1.size(); i++)
	{
		n1[i]->send();
	}

	for (int i = 0; i < 3; i++)
	{
		delete n1[i];
	}
}
