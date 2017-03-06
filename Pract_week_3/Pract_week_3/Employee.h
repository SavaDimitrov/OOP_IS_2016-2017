#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class Employee {


	int id;
	char* firstName;
	char* lastName;
	double salary;
	//const int weight;

public:
		//method without param. Constructor(deffault)
	Employee() {
		id = 0;
		firstName = "";
		lastName = "";
		salary = 0;
	}

	Employee(int _id, char* _firstName, char* _lastName, double _salary) {
		setId(_id);
		setFirstName (_firstName);
		setLastName (_lastName);
		setSalary (_salary);
	}

		//selectors.
	int getID() { return id; } 
	double getSalary() { return salary; }
	char* getfirstName() { return firstName; }
	char* getlastName() { return lastName; }

		//mutators
	void setId(int newID) {
		if (newID < 0) {
			cout << "Invalid ID number!" << '\n';
		}

		id = newID;
	}

	void setSalary(double newSalary) {
		if (newSalary < 0) {
			cout << "Invalid salary amount!" << '\n';
		}

		salary = newSalary;
	}

	void setFirstName(char* newFirstName) {
		if (firstName != NULL) {
			delete firstName;
		}


		firstName = new char[strlen(newFirstName) + 1];
		strcpy (firstName, newFirstName);
	}

	void setLastName(char* newLastName) {
		if (lastName != NULL) {
			delete lastName;
		}

		lastName = new char[strlen(newLastName) + 1];
		strcpy (lastName, newLastName);
	}



		//AnnualSalary
	double getAnnualSalary() {
		return salary * 12;
	}

	void raiseSalary(int percent = 20) {
		setSalary(getSalary() + getSalary()*(percent / 100));
	}

	void description() {
		cout << "First name: " << getfirstName() << '\n';
		cout << "Last name: " << getlastName() << '\n';
		cout << "ID: " << getID() << '\n';
		cout << "Salary: " << getSalary() << '\n';
		cout << "Annual salary: " << getAnnualSalary() << '\n';
		raiseSalary();
		cout << "Salary after raise: " << getSalary() << '\n';
	}

};