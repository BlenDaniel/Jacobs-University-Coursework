#include <iostream>
#include "Square.h"

Square::Square(const char *n, double s) : Rectangle(n, s, s) {
    side = s;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square..." << std::endl;
	return side*side;
}


double Square::perimeter() const{
    std::cout << "perimeter of Square..." << std::endl;
	return 2 * (side + side);
}