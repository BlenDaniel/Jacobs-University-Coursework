#include <iostream>
#include <cmath>
#include "Ring.h"

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "calcArea of Ring..." << std::endl;
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

double Ring::perimeter() const{
    std::cout << "perimeter of Ring..." << std::endl;
	return 2 * innerradius * M_PI;
}
