#pragma once
#include <iostream>
using namespace std;

class Money
{
private:
	int dollars;
	int cents;
public:
	Money() {
		dollars = 0;
		cents = 0;
	}
	Money(int iDollars, int iCents) {
		dollars = iDollars;
		cents = iCents;
	}
	void set_dollars(int iDollars) {
		dollars = iDollars;
	}
	void set_cents(int iCents) {
		cents = iCents;
	}
	int get_dollars() {
		return dollars;
	}
	int get_cents() {
		return cents;
	}

	Money operator+(Money m) {
		Money r;
		r.set_dollars(dollars + m.get_dollars());
		r.set_cents(cents + m.get_cents());
		return r;
	}
	Money operator-(Money m) {
		Money r;
		r.set_dollars(dollars - m.get_dollars());
		r.set_cents(cents - m.get_cents());
		return r;
	}
	Money operator*(Money m) {
		Money r;
		r.set_dollars(dollars * m.get_dollars());
		r.set_cents(cents * m.get_cents());
		return r;
	}
	Money operator/(Money m) {
		Money r;
		r.set_dollars(dollars / m.get_dollars());
		r.set_cents(cents / m.get_cents());
		return r;
	}
	bool operator==(Money m) {
		return bool(dollars == m.get_dollars()) && bool(cents == m.get_cents());
	}
	bool operator!=(Money m) {
		Money r;
		return bool(dollars != m.get_dollars()) && bool(cents != m.get_cents());
	}


	friend ostream& operator<<(ostream& out, Money c) {
		out << "dollars: " << c.get_dollars() << "\tcents: " << c.get_cents();
		return out;
	}
	friend istream& operator>>(istream& in, Money c) {
		cout << "dollars: ", in >> c.dollars;
		cout << "cents: ", in >> c.cents;
		return in;
	}

};

