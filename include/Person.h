#ifndef PERSON_H
#define PERSON_H
#pragma once
#include <iostream>
#include <string>
#include "Validation.h"
using namespace std;

class Person{
protected:
	//Attributes
	string name;
	int id;
	string password;
public:
	//Constructors
	Person() {
		this->id = 0;
	}
	Person(string name, int id, string password) {
		setName(name);
		setId(id);
		setPassword(password);
	}
	//Setters
	void setName(string name) {
        this->name = name;
	}
	void setId(int id) {
		this->id = id;
	}
	void setPassword(string password) {
        this->password = password;
    }
	//Getters
	string getName() {
		return this->name;
	}
	int getId() {
		return this->id;
	}
	string getPassword() {
		return this->password;
	}
	//Method
	void display() {
		cout << "Name: " << this->name << endl;
		cout << "Id: " << this->id << endl;
//		cout << "Password: " << this->password << endl;
	}
};


#endif // PERSON_H
