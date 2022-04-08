/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

/* 
    Commenting out this line actually raises errors in the code since some of the classes and
    functions from std library is are used. We can of couse actually use std:: notation 
    to every variables, objects and functions we will use from that libarary.
*/



int main(int argc, char** argv)
{
	Critter c;

    /* 
        String is not defined and there is an error here.
        Possible fix is std::string name; 
    */
    string name;
	int hunger;
 
    /* 
        cout and endl are is not defined and there is an error here
        Possible fixes are 
            std::cout << std::endl << "Please enter data: " << std::endl;
            std::cout << "Name: ";

    */
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces

    /*
        getline and cin are not defined and there is an error here
        Possible fix is std::getline(std::cin, name);
    */
	getline(cin, name);
	c.setName(name);
	c.setName(name);
    /*
        cout and cin are not defined and there is an error here
        Possible fixes 
            std::cout << "Hunger: ";
	        std::cin >> hunger;
    */
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
    /* 
        cout and endl are is not defined and there is an error here
        Possible fixes are 
            std::cout << "You have created:" << std::endl;

    */
	cout << "You have created:" << endl;
	c.print();
    return 0;
}