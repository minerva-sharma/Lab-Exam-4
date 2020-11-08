/*
Minerva Sharma
CSCE 1040
Lab Exam 4
Problem 1
*/

#include "animal.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <stdio.h>

using namespace std;

Animal::Animal(){
	dWeight = 0.0;
	dName = "";
	dGender = 'a';
	colorDes = "";
}

void Animal::setWeight(float weight){
	dWeight = weight;
}

float Animal::getWeight(){
	return dWeight;
}

void Animal::setName(string name){
	dName = name;
}

string Animal::getName(){
	return dName;
}

void Animal::setGender(char gender){
	dGender = gender;
}

char Animal::getGender(){
	return dGender;
}

void Animal::setColor(string color){
	colorDes = color;
}

string Animal::getColor(){
	return colorDes;
}
