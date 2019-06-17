#ifndef CHECKINGS_H
#define CHECKINGS_H

#include "Account.h"

//This class inherits from the account class
class Checkings : public Account {
public:
	/*
	Base constructor for the checkings class
	Input: Customer* cust 
		   Int id = Account id.
	This consturctor calls the Account constructor because of inheritance
	*/
	Checkings(Customer* cust, int id) : Account(cust, id) {}

	/*
	Method to deposit money into checkings account
	Input: Amount wanted to be deposited
	Makes deposit and adds transaction to the transaction vector
	*/
	void deposit(double amt) {
		balance += amt;
		std::string fees = get_fees();
		string type = "Deposit";
		Transaction* tran = new Transaction(get_customer()->getCNumber(), type, amt, fees);



		transactions.push_back(tran);
	}

	/*
	Method to withdraw money from checkings account
	Input: Amount wanted to be withdrawn
	Makes the withdrawal and adds the transaction to the transaction vector
	*/
	void withdraw(double amt) {
		balance -= amt;
		std::string fees = get_fees();
		string type = "Withdrawal";
		Transaction* tran = new Transaction(get_customer()->getCNumber(), type, amt, fees);


		transactions.push_back(tran);
	}

	/*
	Method used to add interest to checkings account 
	Adds the interest and adds the transaction to the transaction vector
	*/
	void add_interest() {
		double amt = balance * get_customer()->getChecking();
		balance = balance + amt;
		std::string fees = get_fees();
		string type = "Add Interest";
		Transaction* tran = new Transaction(get_customer()->getCNumber(), type, amt, fees);


		transactions.push_back(tran);
	}

};
#endif // !CHECKINGS_H

