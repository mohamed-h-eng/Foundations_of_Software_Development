#include <iostream>
using namespace std;
#pragma once
class Animal
{
private:
	string name;
public:
	Animal();
	virtual void speak()=0;
	void set_name(string i_name);
	string get_name();

};

class Dog: public Animal {
private:
	string sound;
public:
	Dog(string i_name, string i_sound);
	void speak();
};

class Cat : public Animal {
private:
	string sound;
public:
	Cat(string i_name, string i_sound);
	void speak();
};

class Cow : public Animal {
private:
	string sound;
public:
	Cow(string i_name, string i_sound);
	void speak();
};

