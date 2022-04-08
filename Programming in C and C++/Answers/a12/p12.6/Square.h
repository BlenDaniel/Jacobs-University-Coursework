/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
	public:
		Square(const char *n, double);
		~Square(); /* Destructor */
		/* Service method to calculate Area */
		double calcArea() const;
		/* Service Method to calculate Perimeter */
		double perimeter() const;
	private:
		double side;
};

#endif
