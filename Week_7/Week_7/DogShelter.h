#pragma once
#include <iostream>
#include "Dog.h"

class DogShelter {

	Dog* dogs;
	int numDogs;
	char* shelterName;
public:
	DogShelter();
	DogShelter(char*, int);
	DogShelter(const DogShelter& other);
	DogShelter& operator=(const DogShelter &other);
	~DogShelter();

	void setShelterName(char*);
	char* getShelterName() const;

	Dog operator[](int);
	Dog getDog(int);

	void destroyShelter();
};