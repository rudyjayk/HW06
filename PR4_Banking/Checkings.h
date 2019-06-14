#ifndef CHECKINGS_H
#define CHECKINGS_H

#include "Account.h"

class Checkings : public Account {
public:
	Checkings(Customer* cust, int id) : Account(cust, id) {}

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
		double amt = balance * get_customer()->getChecking();
		balance = balance + amt;
		std::string fees = get_fees();
		string type = "Add Interest";
		Transaction* tran = new Transaction(get_customer()->getCNumber(), type, amt, fees);


		transactions.push_back(tran);
	}

};
#endif // !CHECKINGS_H

