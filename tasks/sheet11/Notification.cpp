#include "Notification.h"
#include <iostream>
using namespace std;

Notification::Notification() {
	name ="";
	content ="";
}

Notification::~Notification() {
	cout << "notification deleted\n\n";
}


void Notification::set_name(string i_name) {
	name = i_name;
}
void Notification::set_content(string i_content) {
	content = i_content;
}

string Notification::get_name() {
	return name;
}
string Notification::get_content() {
	return content;
}

EmailNotification::EmailNotification(string i_name, string i_content) {
	set_name(i_name);
	set_content(i_content);
}

void EmailNotification::send() {
	cout << "name: " << get_name() << "\tcontent: " << get_content() << endl;
}

EmailNotification::~EmailNotification() {
	cout << "\nEmailNotification deleted\n";
}

SMSNotification::SMSNotification(string i_name, string i_content) {
	set_name(i_name);
	set_content(i_content);
}

void SMSNotification::send() {
	cout << "name: " << get_name() << "\tcontent: " << get_content() << endl;
}

SMSNotification::~SMSNotification() {
	cout << "SMSNotification deleted\n";
}

PushNotification::PushNotification(string i_name, string i_content) {
	set_name(i_name);
	set_content(i_content);
}

void PushNotification::send() {
	cout << "name: " << get_name() << "\tcontent: " << get_content() << endl;
}

PushNotification::~PushNotification() {
	cout << "PushNotification deleted\n";
}