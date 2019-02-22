/*
Program: Employee Pay Program
File: person.h
Author: Raymond Esparza

This file is indended to be included in an accompanying person.cpp file. This
file contains a class declaration for Person in the inhereting files.
*/
#ifndef PERSON_H
#define PERSON_H

using namespace std;


class Person {
	public:
		Person(){};
		void setFirstName(string first_Name);
		void setLastName(string last_Name);
		void setPayRate(float rate);
		void setHoursWorked(float hours);
		string fullname();
		string getFirstName();
		string getLastName();
		float getPayRate();
		float getHoursWorked();
		float totalPay();


	private:
		string lastname;
		string firstname;
		float payRate;
		float hoursWorked;
};

#endif