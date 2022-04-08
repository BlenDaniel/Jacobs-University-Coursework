/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

/* Parametric Constructor for Area */
Area::Area(const char* n) {
	strncpy(color, n, 10);
	cout << "Area constructor being called...\n";
}
/* Destructor */
Area::~Area() {
	cout << "Destructor is being called on Area...\n";
}
/* Fror printing the color of the object */
void Area::getColor() const {
	cout << "\n" << color << ": ";
}
