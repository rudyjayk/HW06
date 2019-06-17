#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h"

//This class inherits from the account class
class Savings : public Account {
public:
	/*
	Base constructor for the savings class
	Input: Customer* cust
		   Int id = Account id.
	This consturctor calls the Account constructor because of inheritance
	*/
	Savings(Customer* cust, int id) : Account(cust, id) {}

	/*
	Method to deposit money into savings account
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
	Method to withdraw money from savings account
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
		double amt = balance * get_customer()->getSaving();
		balance = balance + amt;
		std::string fees = get_fees();
		string type = "Add Interest";
		Transaction* tran = new Transaction(get_customer()->getCNumber(), type, amt, fees);


		transactions.push_back(tran);
	}

};
#endif // !SAVINGS_H

