#pragma once

#include <string>
#include <iostream>
using namespace std;

class Banking
{
private:
	string  name;
	string  accountNumber = 0;
	float  balance = 0;

public:
Banking(string n, string acc, float bal);
string	GetName();
string	GetAccountNumber();
float	GetBalance();
float	DepositingMoney(float x);
float	WithDrawMoney(float y);
	
};

