#include "stdafx.h"
#include "Banking.h"
#include <string>
#include <iostream>
using namespace std;

 Banking::Banking(string n, string acc, float bal)
{
string	name = n;
string	accountNumber = acc;
float	balance = bal;
}

string Banking::GetName() { return name; }
string Banking::GetAccountNumber() { return accountNumber; }
float Banking::GetBalance() { return balance; }

float Banking::DepositingMoney(float x) 
{
	float balance = GetBalance();
balance = balance + x;
return balance;
}
float Banking::WithDrawMoney(float y) 
{
	float balance = GetBalance();
balance = balance - y;
return balance;
}

