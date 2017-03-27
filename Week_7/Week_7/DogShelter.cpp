#include <iostream>
#include <string>
#include "DogShelter.h"

#define NUMDOGS_CAP 0;

DogShelter::DogShelter() {
	shelterName = nullptr;
	numDogs = NUMDOGS_CAP;
	dogs = nullptr;
}
DogShelter::DogShelter(char* _shelterName, int _numDogs) : shelterName(nullptr), dogs(nullptr) {
	setShelterName(_shelterName);
	this->numDogs = _numDogs;

	dogs = new Dog[numDogs];
	for (int dogIndex = 0; dogIndex < numDogs;dogIndex++) {
		dogs[dogIndex] = Dog();
	}

}
DogShelter::DogShelter(const DogShelter& newShelter) : shelterName(nullptr), dogs(nullptr) {
	setShelterName(newShelter.getShelterName());
	numDogs = newShelter.numDogs;

	dogs = new Dog[numDogs];
	for (int dogIndex = 0; dogIndex < numDogs;dogIndex++) {
		dogs[dogIndex] = newShelter.dogs[dogIndex];
	}
}
DogShelter& DogShelter::operator=(const DogShelter &other) {

}
DogShelter::~DogShelter() {
	destroyShelter();
}

void DogShelter::setShelterName(char* newName) {
	if (shelterName != nullptr) {
		destroyShelter();
	}

	int length = strlen(newName);
	shelterName = new char[length + 1];
	strcpy(shelterName, newName);
}

char* DogShelter::getShelterName() const {
	return this->shelterName;
}

//Dog DogShelter::operator[](int index) {
//
//}
//Dog DogShelter::getDog(int index) {
//
//}

void DogShelter::destroyShelter() {
	if (this != nullptr) {
		delete this;
	}
}