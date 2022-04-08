/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Ring.h"

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

/* Parametric Constructor for Ring */
Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

/* Destructor */
Ring::~Ring() {
	std::cout << "Destructor is being called on Ring...\n";
}

/* Function implementation for Ring */
double Ring::calcArea() const {
	std::cout << "calcArea of Ring..." << std::endl;
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}
/* Function implementation for Ring */
double Ring::perimeter() const{
    std::cout << "perimeter of Ring..." << std::endl;
	return 2 * innerradius * M_PI;
}
