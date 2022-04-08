/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	/* Test objects constructed by the default constructor */
	Critter c;

	/* Variables to get the property values from user */
	string name;
	int hunger;
    int boredom;
	double height;
    int age;
    float weight;
 
	/* 
		Getting an input values and setting the respective 
		values to the properties of the object
	*/

	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";	
	getline(cin, name);
	c.setName(name);

	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

    cout << "Boredom Level(%): ";
	cin >> boredom;
	c.setBoredom(boredom);

	cout << "Height(m): ";
	cin >> height;
	c.setHeight(height);

    cout << "Age: ";
	cin >> age;
	c.setAge(age);

    cout << "Weight(Kg): ";
	cin >> weight;
	c.setWeight(weight);

	cout << "You have created:" << endl;

	/* Caling the service method to view the object */
	c.print();

    return 0;
}