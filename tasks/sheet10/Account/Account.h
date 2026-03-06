#pragma once
class Account
{
private:
	float m_balance;

public:
	Account();
	virtual float daily_interest()=0;
	//void set_deposite(float i_deposit);
	//void set_withdraw(float i_withdraw);
	void deposite(float i_deposite);
	void withdraw(float i_withdraw);
	float get_balance();
};

class Savings : public Account
{
private:
	float interest;
public:
	Savings();
	float daily_interest();
};

class Checking : public Account
{
private:
	float interest;
public:
	Checking();
	float daily_interest();
};