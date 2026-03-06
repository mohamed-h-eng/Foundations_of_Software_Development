#include "Account.h"

Account::Account() {
	m_balance = 0;
}

void Account::deposite(float i_deposit) {
	m_balance += i_deposit;
}
void Account::withdraw(float i_withdraw) {
	m_balance -= i_withdraw;
}

float Account::get_balance() {
	return m_balance;
}



//float Account::deposite() {
//	return m_deposit;
//}
//float Account::withdraw() {
//	return m_withdraw;
//}

Savings::Savings() {
	interest = 6;
}
float Savings::daily_interest() {
	return ((get_balance() * interest) / 100)/30;
}
	
Checking::Checking() {
	interest = 3;
}
float Checking::daily_interest() {
	return get_balance() > 1000 ? ((get_balance() * interest) / 100)/30 : 0;
}