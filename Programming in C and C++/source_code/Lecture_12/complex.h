#include <iostream>

class Complex {
	private:
		double re, im;
	public:
		Complex();
		Complex(double, double);
		Complex(const Complex &);
		// Alternative 1
		Complex operator+(Complex &);
		// Alternative 2
		//friend Complex& operator+(const Complex &, const Complex &);
		// Complex + double - Alternative 1
		Complex operator+(double);
		// Complex + double - Alternative 2 as friend function
		// friend Complex operator+(Complex &, double);
		// double + Complex
		friend Complex operator+(double, Complex &);
		Complex& operator=(Complex &c);
		void print();
};
