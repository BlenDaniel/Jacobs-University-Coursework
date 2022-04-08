/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include "Rectangle.h"

/* Parametric Constructor for Rectangle */
Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}
/* Destructor */
Rectangle::~Rectangle() {
    std::cout << "Destructor is being called on Rectangle...\n";
}

/* Function implementation for Rectangle */
double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle..." << std::endl;
	return length*width;
}

/* Function implementation for Rectangle */
double Rectangle::perimeter() const{
    std::cout << "perimeter of Rectangle..." << std::endl;
	return 2 * (length + width);
}