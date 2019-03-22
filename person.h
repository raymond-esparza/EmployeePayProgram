/*
Raymond Esparza
Section #2

File: person.h

This file is indended to be included in an accompanying person.cpp file. This
file contains a class declaration for Person in the inhereting files.
*/
#ifndef PERSON_H
#define PERSON_H

using namespace std;


class Person {
	public:
		Person(string firstName, string lastName, float rate, float hours);
		void setFirstName(string fName);
		void setLastName(string lName);
		void setPayRate(float rate);
		void setHoursWorked(float hours);
		string fullname();
		string getFirstName();
		string getLastName();
		float getPayRate();
		float getHoursWorked();
		float totalPay();


	private:
		string lastName;
		string firstName;
		float payRate;
		float hoursWorked;
};

#endif