#pragma once
#include <iostream>
#include <string>

class Dog {

	char* dogName;

public:
	
	Dog();
	Dog(char* newName);
	Dog(const Dog& newDog);
	Dog& operator=(const Dog& other);
	~Dog();
	
	void removeDogName();
	void setDogName(char*);
	char* getDogName() const;

};