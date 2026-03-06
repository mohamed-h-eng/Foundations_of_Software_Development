#include <iostream>
using namespace std;
#pragma once
/* 
implementations:
	addition
	multiplication
	stream input
	stream output
	++
	--
	+=
	-=

*/
class Complex
{
private:
	int real_num, img_num;
public:
	Complex() {
		real_num = 0;
		img_num = 0;
	}
	Complex(int x, int y) {
		real_num = x;
		img_num = y;
	}
	void set_real(int x) {
		real_num = x;
	}
	void set_img(int y) {
		img_num = y;
	}
	int get_real() {
		return real_num;
	}
	int get_img() {
		return img_num;
	}

	Complex operator+(Complex c) {
		Complex r;
		r.set_real(real_num + c.get_real());
		r.set_img(img_num + c.get_img());
		return r;
	}
	Complex operator-(Complex c) {
		Complex r;
		r.set_real(real_num - c.get_real());
		r.set_img(img_num - c.get_img());
		return r;
	}
	Complex operator*(Complex c) {
		Complex r;
		r.set_real(real_num * c.get_real());
		r.set_img(img_num * c.get_img());
		return r;
	}
	friend ostream& operator<<(ostream& out, Complex c) {
		out << c.get_real() << "+" << c.get_img() << +"i" << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Complex c) {
		string input;
		in >> input;
		int real = 0;
		int img = 0;
		for (int i = 0;i < input.length();i++) {
			if (input[i] == '+' || input[i] == '-') {
				img += input[i];
				if (input[i] == 'i') {

				}
			}
			else {
				real += input[i];
			}
		}
		c.set_real(real);
		c.set_img(img);
		return in;
	}
};

