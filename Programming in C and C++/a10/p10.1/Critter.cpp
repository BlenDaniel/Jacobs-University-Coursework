/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"
using namespace std;

/*
    Removing Critter:: will make this function to be a normal function and not
    a function of the Critter class. Since it makes it like that, in the body of the function
    the variable is not defined. 

    using Critter:: or std:: will tell the compiler that I am declaring or using a function or
    variable from those classes. If I do not tell the complier from where to get this undefined
    variables then the program will raise an error.
*/

/* 
    string and critter is not defined. So we actually need be specify from where 
    we get the method and the variable.
    
    Possible fix is Critter::setName(std::string& newname)
*/
void Critter::setName(string& newname) {
    /* name is not defined */    
	name = newname;
}

/* 
    Possible fix is original code.
    Critter::setHunger
*/
void Critter::setHunger(int newhunger) {
    /* hunger is not defined */
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}

/* 
    Possible fix is original code.
    Critter::getHunger
*/
int Critter::getHunger() {
    /* hunger is not defined */
	return hunger;
}