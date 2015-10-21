
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Banking.h"

using namespace std;

int main()
{  
	Banking poso ("ahmed","bah123",321);
	cout << poso.GetName() << endl;
	cout << poso.GetAccountNumber() << endl;
	cout << poso.GetBalance() << endl;
	cout << poso.DepositingMoney(1000) << endl;  //depositing 1000
	cout << poso.WithDrawMoney(1000) << endl;    //withdraw 1000
	return 0;
}

