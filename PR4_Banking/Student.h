#ifndef STUDENT_H
#define STUDENT_H

#include "Customer.h"
#include <string>
using std::string;

//This class inherits from the customer class
class Student : public Customer {
protected:
	const double savings_interest = 0.02;
	const double check_interest = 0.01;
	const int check_charge = 10;
	const int overdraft_penalty = 25;
public:
	/*
	Base Constructor for the Student Class
	Input: String n = name
		   String a = address
		   Int a_in = age
		   String tn = telephone number
		   String cn = customer number
	This Constructor calls the customer class due to inheritance
	*/
	Student(string n, string a, int a_in, string tn, string cn) : Customer(n, a, a_in, tn, cn) {}

	//Getter methods for the student class

	//Returns saving interest
	double getSaving() {
		return savings_interest;
	}

	//Returns checking interest
	double getChecking() {
		return check_interest;
	}

	//Returns overdraft penalty
	int getOverdraft() {
		return overdraft_penalty;
	}

	//Returns check charge
	int getCharge() {
		return check_charge;
	}

};

#endif // !STUDENT_H

