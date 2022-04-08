#include <iostream>
#include <cmath>                      //needed for sqrt
#include "Complex.h"

using namespace std;  // for cout

Complex::Complex() {  // sets everything to 0
	real = imag = 0;
	cout << "Constructor one is being called" << endl;
}
Complex::Complex(float r, float i) {  // initializes it to a given couple. 
									  // Please note that here it is
	real = r;                         // not necessary to replicate the default value for the second parameter
	imag = i;
	cout << "Constructor two is being called" << endl;
}

double Complex::magnitude() {         // computes the magnitude. 
									  // Note that we can use freely C standard 
									  // functions like sqrt
	return sqrt(real * real + imag * imag);
}

void Complex::print() {               // prints data to screen via cout
	if (imag) {
		cout << noshowpos << real << showpos << imag << "i" << endl;
	} 
	else {
		cout << noshowpos << real << showpos << endl;
	}
}