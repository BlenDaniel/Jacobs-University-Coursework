/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public Area {
	public:
		Circle(const char *n, double a);
		~Circle(); /* Destructor */
		/* Service method to calculate Area */
		double calcArea() const;
		/* Service Method to calculate Perimeter */
		double perimeter() const;
	private:
		double radius;
};

#endif
