/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include "Square.h"

/* Parametric Constructor for Square */
Square::Square(const char *n, double s) : Rectangle(n, s, s) {
    side = s;
}

/* Destructor */
Square::~Square() {
	std::cout << "Destructor is being called on Square...\n";
}
/* Function implementation for Square */
double Square::calcArea() const {
	std::cout << "calcArea of Square..." << std::endl;
	return side*side;
}

/* Function implementation for Square */
double Square::perimeter() const{
    std::cout << "perimeter of Square..." << std::endl;
	return 2 * (side + side);
}