#include<string>
using namespace std;
#pragma once
class Address
{
private:
	int house_number;
	string street;
	int apart_number;
	string city;
	string state;
	int postal_code;
public:
	Address();
	Address(int i_house_number, string i_street, int i_apart_number, string i_city, string i_state, int i_postal_code);
	void print();
	bool comes_before(Address i_Address);
	int get_postal_code();
};

