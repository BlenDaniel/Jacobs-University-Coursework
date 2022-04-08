#include "Critter2.h"
#include <iostream>

using namespace std;

Critter::Critter(string n, int hu, int bo, double he) {
	name = n;
	hunger = hu;
	boredom = bo;
	height = he;
}

/*
Critter::Critter(string n, int hu, int bo, double he) : name(n) {
	hunger = hu;
	boredom = bo;
	height = he;
}
*/

Critter::Critter() {
	// empty constructor, so we can declare arrays of Critters
}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}