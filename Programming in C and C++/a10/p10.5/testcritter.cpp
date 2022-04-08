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

int main(int argc, char **argv)
{
	/* Test objects constructed by the default constructor */
	Critter *c = new Critter();
	Critter critter;

	/* Test object constructed by the Name only constructor */
	Critter critterNameOnly("Name Test");

	/* 
		Test object constructed by a constructor that can 
		take optional height but all other properties are required 
	*/
	Critter critterTest("Critter Test", 2, 5, 30.5);
	Critter critterTestWithOutHeight("Critter Without Height", 2, 3);

	/* Calling out the service method print to show the values of the objects */
	cout << "You have created:" << endl;
	/* Critter created by the default value */
	c->print();
	cout << endl;
	critter.print();
	cout << endl;

	/* Critter with name values given and others set to default value */
	critterNameOnly.print();
	cout << endl;

	/* Critter with values given */
	critterTest.print();
	cout << endl;

	/* Critter without height */
	critterTestWithOutHeight.print();
	cout << endl;
	return 0;
}