#ifndef ADMIN_H
#define ADMIN_H
#pragma once
#include "Employee.h"

class Admin : public Employee{
public:
	//Constructors
	Admin() : Employee(){}
	Admin(string name, int id, string password, double salary) : Employee(name, id, password, salary){}
	//Methods
	void addEmployee(Employee& employee) {
		allEmployees.push_back(employee);
	}
	Employee* searchEmployee(int id) {
	    for (int i = 0; i < allEmployees.size(); i++) {
			if (allEmployees[i].getId() == id) return &allEmployees[i];
		}
//		for (auto eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) {
//			if (eIt->getId() == id) return &(*eIt);
//		}
		return NULL;
	}
	void editEmployee(int id, string name, string password, double salary) {
		searchEmployee(id)->setName(name);
		searchEmployee(id)->setPassword(password);
		searchEmployee(id)->setSalary(salary);
	}
	void listEmployee() {
		for (eIt = allEmployees.begin(); eIt != allEmployees.end(); eIt++) {
			eIt->display();
			cout << "--------------------\n";
		}
	}
};

static vector<Admin> allAdmins;
static vector<Admin>::iterator aIt;
#endif // ADMIN_H
