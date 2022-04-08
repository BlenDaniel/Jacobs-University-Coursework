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
	int tmp_gcd = 1;

	/* Making a the greatest number between a & b */
	if (b > a)
	{
		int temp = b;
		b = a;
		a = temp;
	}

	/* 
		Checking to see if i is divisible between the two numbers, 
		i is the number count from 1 upto b(smaller number) 
	*/
	for (int i = 1; i <= b; ++i)
	{
		/* If i is divisible between the two, then it is the GCD */
		if (a % i == 0 && b % i == 0)
		{
			tmp_gcd = i;
		}
	}

	return tmp_gcd;
}

/* Least common multiple function */
int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);
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
/* Operator * implementation, not a friend function but a 
function of the class Fraction */
Fraction Fraction::operator*(Fraction &src)
{
	Fraction res(this->num * src.num, this->den * src.den);
	return res;
}
/* Operator / implementation, not a friend function but a 
function of the class Fraction */
Fraction Fraction::operator/(Fraction &src)
{
	Fraction res(this->num * src.den, this->den * src.num);
	return res;
}

/* Operator = that returns &Fraction (not a friend function 
but a function of the class Fraction) */
Fraction &Fraction::operator=(Fraction &src)
{
	this->num = src.num;
	this->den = src.den;
	return *this;
}
/* Operator + that returns Fraction (not a friend function 
but a function of the class Fraction) */
Fraction Fraction::operator+(Fraction &src)
{
	Fraction res(((this->num * lcm(this->den, src.den)) / this->den) + (src.num * (lcm(this->den, src.den) / this->den)),
				 lcm(this->den, src.den));
	return res;
}
/* Operator - that returns Fraction (not a friend function 
but a function of the class Fraction) */
Fraction Fraction::operator-(Fraction &src)
{
	Fraction res(((this->num * lcm(this->den, src.den)) /
				  this->den) -
					 (src.num * (lcm(this->den, src.den) / this->den)),
				 lcm(this->den, src.den));
	return res;
}
/* Operator < that returns bool if true (not a friend function 
but a function of the class Fraction) */
bool Fraction::operator<(Fraction &src)
{
	double f1 = (double)this->num / (double)this->den;
	double f2 = (double)src.num / (double)src.den;
	return f1 < f2;
}

/* Operator > that returns bool (not a friend function but a 
function of the class Fraction) */
bool Fraction::operator>(Fraction &src)
{
	double f1 = (double)this->num / (double)this->den;
	double f2 = (double)src.num / (double)src.den;
	return f1 > f2;
}