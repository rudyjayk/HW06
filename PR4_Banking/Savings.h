#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h"

class Savings : public Account {
public:
	Savings(Customer* cust, int id) : Account(cust, id) {}

	void deposit(double amt) {
		balance += amt;
		std::string fees = get_fees();
		string type = "Deposit";
		Transaction* tran = new Transaction(get_customer()->getCNumber(), type, amt, fees);

	

		transactions.push_back(tran);
	}

	void withdraw(double amt) {
		balance -= amt;
		std::string fees = get_fees();
		string type = "Withdrawal";
		Transaction* tran = new Transaction(get_customer()->getCNumber(), type, amt, fees);


		transactions.push_back(tran);
	}

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

