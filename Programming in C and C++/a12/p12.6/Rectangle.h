/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Area.h"

class Rectangle : public Area {
	public:
		Rectangle(const char *n, double a, double b);
		~Rectangle(); /* Destructor */
		/* Service method to calculate Area */
		double calcArea() const;
		/* Service Method to calculate Perimeter */
		double perimeter() const;
	private:
		double length;
		double width;
};

#endif
