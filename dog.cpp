/*
Minerva Sharma
CSCE 1040
Lab Exam 4
Problem 1
*/

#include "animal.h"
#include "dog.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <stdio.h>

using namespace std;

Dog::Dog(){
	Animal();
	dBreed = "";
	spayedOrNeutered = 0;
	registrationID = "";
	dNotes = "";
}

void Dog::setBreed(string breed){
	dBreed = breed;
}

string Dog::getBreed(){
	return dBreed;
}

void Dog::setSpayed(bool spayed){
	spayedOrNeutered = spayed;
}

bool Dog::getSpayed(){
	return spayedOrNeutered;
}

void Dog::setID(string ID){
	registrationID = ID;
}

string Dog::getID(){
	return registrationID;
}

void Dog::setNotes(string note){
	dNotes = note;
}

string Dog::getNotes(){
	return dNotes;
}
