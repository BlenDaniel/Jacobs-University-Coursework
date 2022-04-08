/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#ifndef _RING_H
#define _RING_H
#include "Circle.h"

class Ring : public Circle {
	public:
		Ring(const char *n, double outer, double inner);
		~Ring(); /* Destructor */
		/* Service method to calculate Area */
		double calcArea() const;
		/* Service Method to calculate Perimeter */
		double perimeter() const;
	private:
		double innerradius;
};

#endif
