#include <iostream>
#include "complex.h"

Complex::Complex() {
	re = im = 0;
}

Complex::Complex(double re, double im) {
	this->re = re;
	this->im = im;
}

Complex::Complex(const Complex &c) {
	this->re = c.re;
	this->im = c.im;
}

Complex Complex::operator+(Complex &c) {
	Complex res(this->re + c.re, this->im + c.im);
	return res;
}

/*Complex operator+(const Complex &a, const Complex &b) {
	Complex res(a.re + b.re, a.im + b.im);
	return res;
}*/

Complex Complex::operator+(double r) {
	Complex res(this->re + r, this->im);
	return res;
}

/*Complex operator+(Complex & c, double r) {
	Complex res(c.re + r, c.im);
	return res;
}*/

Complex operator+(double r, Complex &c) {
	Complex res(r + c.re, c.im);
	return res;
}

Complex& Complex::operator=(Complex &c) {
	this->re = c.re;
	this->im = c.im;
	return *this;
}

void Complex::print() {
	std::cout << re << " " << im << std::endl;
}
