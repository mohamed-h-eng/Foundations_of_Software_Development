#include "Address.h"
#include<iostream>
using namespace std;

Address::Address() {
	house_number = 0;
	street = "";
	apart_number = 0;
	city = "";
	state = "";
	postal_code = 0;
}
Address::Address(int i_house_number, string i_street, int i_apart_number, string i_city, string i_state, int i_postal_code) {
	house_number = i_house_number;
	apart_number = i_apart_number;
	street = i_street;
	apart_number = i_apart_number;
	city = i_city;
	state = i_state;
	postal_code = i_postal_code;
}
void Address::print() {
	cout << house_number << " " << street << " " << apart_number << endl;
	cout << city << " " <<  state << " " << postal_code;
}
int Address::get_postal_code() {
	return postal_code;
}
bool Address::comes_before(Address i_Address) {
	return postal_code == i_Address.get_postal_code();
}