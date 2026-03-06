#include "Animal.h"
#include <iostream>

Animal::Animal() {
	name = "";
}

void Animal::set_name(string i_name) {
	name = i_name;
}
string Animal::get_name(){
	return name;
}

Dog::Dog(string i_name,string i_sound) {
	sound = i_sound;
	set_name(i_name);
}
void Dog::speak() {
	cout << "name: " << get_name();
	cout << "\nsound: " << sound << endl;
}

Cat::Cat(string i_name, string i_sound) {
	sound = i_sound;
	set_name(i_name);
}
void Cat::speak() {
	cout << "name: " << get_name();
	cout << "\nsound: " << sound << endl;
}

Cow::Cow(string i_name, string i_sound) {
	sound = i_sound;
	set_name(i_name);
}
void Cow::speak() {
	cout << "name: " << get_name();
	cout << "\nsound: " << sound << endl;
}