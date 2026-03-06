#pragma once
#include <string>
using namespace std;

class Notification
{
private:
	string name;
	string content;
public:
	Notification();
	virtual void send()=0;
	void set_name(string i_name);
	void set_content(string i_content);
	string get_name();
	string get_content();
	virtual ~Notification();
};


struct EmailNotification : public Notification {
	EmailNotification(string i_name, string i_content);
	~EmailNotification();
	void send();
};

struct SMSNotification : public Notification {
	SMSNotification(string i_name, string i_content);
	~SMSNotification();
	void send();
};

struct PushNotification : public Notification {
	PushNotification(string i_name, string i_content);
	~PushNotification();
	void send();
};

