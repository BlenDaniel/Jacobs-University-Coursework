/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_
using namespace std;

class Fraction
{

private:	 // internal implementation is hidden
	int num; // numerator
	int den; // denominator

	int gcd(int a, int b); // calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();				// empty constructor
	Fraction(int, int = 1); // constructor taking values for fractions and
							// integers. Denominator by default is 1
	void print();			// prints it to the screen
	/* Operator << prototype that return an ostream(output stream)*/
	friend ostream &operator<<(ostream &out, const Fraction &z);
	/* Operator >> prototype that return an istream(input stream) */
	friend istream &operator>>(istream &in, Fraction &z);
	/* Operator * prototype that multiplies two fractions and returns a Fraction */
	Fraction operator*(Fraction &);
	/* Operator / prototype that divides two fractions and returns a Fraction */
	Fraction operator/(Fraction &);
};

#endif /* FRACTION_H_ */