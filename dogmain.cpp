/*
Minerva Sharma
CSCE 1040
Lab Exam 4
Problem 1
*/

#include "animal.h"
#include "dog.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

int main(){
	cout << endl;
	cout << "Storing dog information..." << endl;
	cout << endl;

	vector<Animal*> dogs;
	string breed;
	float weight;
	string name;
	char gender;
	bool spayed;
	string ID;
	string color;
	string notes;

	for (int j = 0; j < 3; j++){
		cout << "Dog #" << j + 1 << endl;

		cout << "Enter the dog's breed (string): ";
		cin >> breed;

		cout << "Enter the dog's weight (floating point number): ";
		cin >> weight;

		cout << "Enter the dog's name (string): ";
		cin.ignore();
		getline(cin, name);

		cout << "Enter the dog's gender ('m' or 'f'): ";
		cin >> gender;

		cout << "Enter if the dog has been spayed or neutered (1 for yes/0 for no): ";
		cin >> spayed;
		
		cout << "Enter the dog's registered ID (alphanumeric): ";
		cin >> ID;

		cout << "Enter the dog's color description (string): ";
		cin.ignore();
		getline(cin, color);

		cout << "Enter any other comments (string): ";
		getline(cin, notes);	

		Animal* dogObj = new Dog(weight, name, gender, color, breed, spayed, ID, notes);
		
		dogs.push_back(dogObj);

		cout << endl;
	}

	cout << "Printing Dog Information..." << endl;

	for (vector<Animal*>::iterator it = dogs.begin(); it != dogs.end(); it++){
		cout << "Dog: " << endl;
		(*it)->printInfo();
		cout << endl;
	}

	for(vector<Animal*>::iterator it = dogs.begin(); it != dogs.end(); it++){
		delete *it;
	}

	return 0;
}
