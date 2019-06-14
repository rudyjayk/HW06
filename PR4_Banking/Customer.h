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
	Customer(string n, string a_, int a_in, string tn, string cn) {
		name = n;
		address = a_;
		age = a_in;
		telephone_number = tn;
		customer_number = cn;
	}


	string getName() {
		return name;
	}

	string getAddress() {
		return address;
	}

	int getAge() {
		return age;
	}

	string getTNumber() {
		return telephone_number;
	}

	string getCNumber() {
		return customer_number;
	}

	void setName(string str) {
		this->name = str;
	}

	void setAddress(string str) {
		this->address = str;
	}

	void setAge(int num) {
		this->age = num;
	}

	void setTNumber(string str) {
		this->telephone_number = str;
	}

	void setCNumber(string str) {
		this->customer_number = str;
	}

	virtual double getSaving() = 0;
	virtual double getChecking() = 0;
	virtual int getOverdraft() = 0;
	virtual int getCharge() = 0;
	
};




#endif