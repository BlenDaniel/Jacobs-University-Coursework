/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Circle.h"

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

/* Parametric Constructor for Circle */
Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
	std::cout << "Circle constructor being called...\n";
}
/* Destructor */
Circle::~Circle() {
	std::cout << "Destructor is being called on Circle...\n";
}
/* Function implementation for Circle */
double Circle::calcArea() const {
	std::cout << "calcArea of Circle..." << std::endl;
	return radius * radius * M_PI;
}
/* Function implementation for Circle */
double Circle::perimeter() const {
	std::cout << "perimeter of Circle..." << std::endl;
	return 2 * radius * M_PI;
}