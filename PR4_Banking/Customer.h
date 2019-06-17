#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
using std::string;
/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
private:
	string name;
	string address;
	int age;
	string telephone_number;
	string customer_number;

public:
	/*
	Base Constructor for the Customer Class
	Input: String n = name
		   String a = address
		   Int a_in = age
		   String tn = telephone number
		   String cn = customer number
	This Constructor is usually called in the derived classes that inherit form customer class
	*/
	Customer(string n, string a_, int a_in, string tn, string cn) {
		name = n;
		address = a_;
		age = a_in;
		telephone_number = tn;
		customer_number = cn;
	}

	//Getter methods for customer class

	//Returns name of customer
	string getName() {
		return name;
	}

	//Returns address of customer
	string getAddress() {
		return address;
	}

	//Returns age of customer
	int getAge() {
		return age;
	}

	//Returns telephone number of customer
	string getTNumber() {
		return telephone_number;
	}

	//Returns customer number of customer
	string getCNumber() {
		return customer_number;
	}

	//Setter methods for customer class

	//Sets the name of the customer
	void setName(string str) {
		this->name = str;
	}

	//Sets the address of the customer
	void setAddress(string str) {
		this->address = str;
	}

	//Sets the age of the customer
	void setAge(int num) {
		this->age = num;
	}

	//Sets the telephone number of the customer
	void setTNumber(string str) {
		this->telephone_number = str;
	}

	//Sets the customer number of the customer
	void setCNumber(string str) {
		this->customer_number = str;
	}

	//Virtual abstract methods that are used in the derived classes, Adult, Senior and Student
	virtual double getSaving() = 0;
	virtual double getChecking() = 0;
	virtual int getOverdraft() = 0;
	virtual int getCharge() = 0;
	
};




#endif