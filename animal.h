/*
Minerva Sharma
CSCE 1040
Lab Exam 4
Problem 1
*/

#ifndef ANIMAL_H
#define ANIMAL_H
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;
class Animal{
	public:
		Animal();
		Animal(float weight, string name, char gender, string color){
			dWeight = weight;
			dName = name;
			dGender = gender;
			colorDes = color;
		}
		void setWeight(float weight);
		float getWeight();
		void setName(string name);
		string getName();
		void setGender(char gender);
		char getGender();
		void setColor(string color);
		string getColor();
		virtual void printInfo() const{
			cout << "Weight: " << dWeight << endl;
			cout << "Name: " << dName << endl;
			cout << "Gender: " << dGender << endl;
			cout << "Color Description: " << colorDes << endl;
		}
	private:
		float dWeight;
		string dName;
		char dGender;
		string colorDes;
};
#endif
