#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
	public:
		Square(const char *n, double);
		~Square();
		double calcArea() const;
		virtual double perimeter() const;
	private:
		double side;
};

#endif
