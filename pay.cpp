/*
Raymond Esparza
Section #2

File: pay.cpp

This program is intended to work alongside person.cpp and person.h accompanying files. It also reads in
a text file called "input.txt" that has lines formatted as: "firstname lastname float_hours float_payrate".
This main file reads in data from the text file and assigns it to elements of an array of employees, whose
class and member functions are defined in accompanying files. It then calculates the pay they are owed and
writes that to a new file called "output.txt".

*/

#include <vector>
#include <iostream>
#include <fstream>
#include "person.cpp"

using namespace std;

//Function Declarations
vector<Person> readData(vector<Person>);
void writeData(vector<Person>, int);



int main() {

	vector<Person> employees;
	employees = readData(employees);
	writeData(employees, employees.size());

	cout << "Ending Program.\n";

	return 0;
}



//This function takes as input an empty vector of employees and opens a text file. It then
//fills the elements in the array with data it reads from the text file. It returns
//a filled vector of employees
vector<Person> readData(vector<Person> employees){

	ifstream datafile("input.txt");
	string first, last = "";
	float hours, rate = 0.0;

	cout << "Reading in employee data.\n";
	
	if(datafile.is_open() ){
		while( !datafile.eof() ){
			datafile >> first >> last >> hours >> rate;
			employees.emplace_back(first, last, rate, hours);
		}
	}
	cout << "Employee data read.\n" << endl;
	datafile.close();
	return employees;	
}


//This function takes in a vector of employees and a number of employees to write.
//It then creates a textfile and writes the data of each employee on a new line in
//the text file.
void writeData(vector<Person> employees, int num_employees){
	ofstream datafile("output.txt");
	cout << "Creating output file.\n";
	if(datafile.is_open() ){
		for(int i = 0; i != num_employees; ++i){
			datafile << employees.at(i).fullname() << " " << employees.at(i).totalPay() << endl;
		}
	}
	datafile.close();
	cout << "Output data file created.\n" << endl;
	return;
}
