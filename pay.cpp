/*
Program: Employee Pay Program
Author: Raymond Esparza

This program is intended to work alongside person.cpp and person.h accompanying files. It also reads in
a text file called "input.txt" that has lines formatted as: "firstname lastname float_hours float_payrate".
This main file reads in data from the text file and assigns it to elements of an array of employees, whose
class and member functions are defined in accompanying files. It then calculates the pay they are owed and
writes that to a new file called "output.txt".

*/


#include <iostream>
#include <fstream>
#include "person.cpp"

using namespace std;

//Function Declarations
int readData(Person*);
void writeData(Person*, int);



int main() {

	int numlines;

	Person employees[20];				//no more than 20 employees are permitted
	numlines = readData(employees);
	writeData(employees, numlines);

	cout << "Ending Program.\n";

	return 0;
}




//This function takes as input an array of employees and opens a text file. It then
//fills the elements in the array with data it reads from the text file. It returns
//the number of lines it read in.
int readData(Person *employees){

	ifstream datafile("input.txt");
	string first, last = "";
	float hours, rate = 0.0;
	int index = 0;

	cout << "Reading in employee data.\n";
	
	if(datafile.is_open() ){
		while(!datafile.eof()){
			datafile >> first >> last >> hours >> rate;
			employees[index].setFirstName(first);
			employees[index].setLastName(last);
			employees[index].setPayRate(rate);
			employees[index].setHoursWorked(hours);
			++index;
		}
	}
	cout << "Employee data read.\n";
	datafile.close();
	return index;	
}


//This function takes in an array of employees and a number of employees to write.
//It then creates a textfile and writes the data of each employee on a new line in
//the text file.
void writeData(Person *employees, int num_employees){
	ofstream datafile("output.txt");
	cout << "Creating output file.\n";
	if(datafile.is_open() ){
		for(int i = 0; i != num_employees; ++i){
			datafile << employees[i].fullname() << " " << employees[i].totalPay() << endl;
		}
	}
	datafile.close();
	cout << "Output data file created.\n";
	return;
}
