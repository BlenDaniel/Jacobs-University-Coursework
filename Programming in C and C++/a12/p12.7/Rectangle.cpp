#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
    
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle..." << std::endl;
	return length*width;
}


double Rectangle::perimeter() const{
    std::cout << "perimeter of Rectangle..." << std::endl;
	return 2 * (length + width);
}