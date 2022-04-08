#include <iostream>
#include <cmath>
#include "Circle.h"

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle..." << std::endl;
	return radius * radius * M_PI;
}

double Circle::perimeter() const {
	std::cout << "perimeter of Circle..." << std::endl;
	return 2 * radius * M_PI;
}