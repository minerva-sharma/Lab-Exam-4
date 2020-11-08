/*
Minerva Sharma
CSCE 1040
Lab Exam 4
Problem 1
*/

#ifndef DOG_H
#define DOG_H
#include "animal.h"
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;
class Dog : public Animal{
	public:
		Dog();
		Dog(float weight, string name, char gender, string color, string breed, bool spay, string ID, string notes):Animal(weight, name, gender, color){
			dBreed = breed;
			spayedOrNeutered = spay;
			registrationID  = ID;
			dNotes = notes;	
		}
		void setBreed(string breed);
		string getBreed();
		void setSpayed(bool spayed);
		bool getSpayed();
		void setID(string ID);
		string getID();
		void setNotes(string note);
		string getNotes();
		void printInfo() const override{
			Animal::printInfo();
			cout << "Breed: " << dBreed << endl;
			cout << "Spayed or neutered: " << spayedOrNeutered << endl;
			cout << "ID: " << registrationID << endl;
			cout << "Other comments: " << dNotes << endl;
		}
	private:
		string dBreed;
		bool spayedOrNeutered;
		string registrationID;
		string dNotes;
};
#endif
