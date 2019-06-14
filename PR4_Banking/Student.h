#ifndef STUDENT_H
#define STUDENT_H

#include "Customer.h"
#include <string>
using std::string;

class Student : public Customer {
protected:
	const double savings_interest = 0.02;
	const double check_interest = 0.01;
	const int check_charge = 10;
	const int overdraft_penalty = 25;
public:
	Student(string n, string a, int a_in, string tn, string cn) : Customer(n, a, a_in, tn, cn) {}

	double getSaving() {
		return savings_interest;
	}

	double getChecking() {
		return check_interest;
	}

	int getOverdraft() {
		return overdraft_penalty;
	}

	int getCharge() {
		return check_charge;
	}

};

#endif // !STUDENT_H

