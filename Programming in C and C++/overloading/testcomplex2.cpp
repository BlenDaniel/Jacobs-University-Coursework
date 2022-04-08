#include <iostream>
#include "complex.h"

using namespace std;

int main() {
	Complex c1(1, 2), c2(3, 4), c3(1, 1);
	Complex a = c1 + c2;
	a.print();
	Complex b =  c1 + c2 + c3;
	b.print();
	Complex c, d;
	// using the assignment operator
	// remove the reference in the return type and see the errors
	c = d = b;
	c.print();
	d.print();
	// one way of calling the copy constructor
	Complex copy(c);
	copy.print();
	Complex add1 = c + 6;
	add1.print();
	Complex add2 = 7 + c;
	add2.print();
	return 0;
}