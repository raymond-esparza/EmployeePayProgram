/*
Raymond Esparza
Section #2

File: person.cpp

This file is intended to be included in pay.cpp main file and in conjunction with person.h header file.
This file contains the member functions of the Person class declared in person.h.
*/
#include <string>
#include "person.h"

Person::Person(string fName, string lName, float rate, float hours){
	firstName = fName;
	lastName = lName;
	payRate = rate;
	hoursWorked = hours;
}


void Person::setFirstName(string fName){
	firstName = fName;
	return;
}


void Person::setLastName(string lName){
	lastName = lName;
	return;
}


void Person::setPayRate(float rate){
	payRate = rate;
	return;
}


void Person::setHoursWorked(float hours){
	hoursWorked = hours;
	return;
}


string Person::fullname(){
	return firstName + " " + lastName;
}

string Person::getFirstName(){
	return firstName;
}


string Person::getLastName(){
	return lastName;
}


float Person::getPayRate(){
	return payRate;
}


float Person::getHoursWorked(){
	return hoursWorked;
}


float Person::totalPay(){
	return hoursWorked * payRate;
}