/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"
using namespace std;

/* Empty Constructor */
Fraction::Fraction()
{
	num = 1;
	den = 1;
	cout << "Empty Constructor is being called" << endl;
}
/* Parameteric Constructor */
Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}
/* Implementation of a private function GCD(Greatest Common Divisor) */
int Fraction::gcd(int a, int b)
{

	return a < 0 ? (b == 0 ? -a : gcd(b, -a % b)) : b < 0 ? -b == 0 ?
	 a : gcd(-b, a % -b) : b == 0 ? a : gcd(b, a % b);
}

/* Least common multiple function */
int Fraction::lcm(int a, int b)
{
	return (a * b / gcd(a, b)) < 0 ? -(a * b / gcd(a, b)) : 
	(a * b / gcd(a, b));
}

/* endl was causing problems. I do not know why. */
/* Service method implementation */
void Fraction::print()
{
	cout << num << "/" << den;
}
/* Operator << implementation, since its a friend function,
 we can access the elements of z */
ostream &operator<<(ostream &out, const Fraction &z)
{
	out << "The numerator is " << z.num << " and denominator is " 
	<< z.den << "\n\n";
	return out;
}
/* Operator >> implementation, since its a friend function,
 we can access the elements of z */
istream &operator>>(istream &in, Fraction &z)
{
	in >> z.num >> z.den;
	return in;
}
/* Operator * implementation, not a friend function but a function 
of the class Fraction */
Fraction Fraction::operator*(Fraction &src)
{
	Fraction res(this->num * src.num, this->den * src.den);
	return res;
}
/* Operator / implementation, not a friend function but a function 
of the class Fraction */
Fraction Fraction::operator/(Fraction &src)
{
	Fraction res(this->num * src.den, this->den * src.num);
	return res;
}
