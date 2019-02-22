/*
Program: Employee Pay Program
Author: Raymond Esparza

This file is intended to be included in pay.cpp main file and in conjunction with person.h header file.
This file contains the member functions of the Person class declared in person.h.
*/
#include "person.h"

void Person::setFirstName(string first_Name){
	firstname = first_Name;
	return;
}


void Person::setLastName(string last_Name){
	lastname = last_Name;
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
	return firstname + " " + lastname;
}

string Person::getFirstName(){
	return firstname;
}


string Person::getLastName(){
	return lastname;
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