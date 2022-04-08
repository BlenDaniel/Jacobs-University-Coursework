/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
	/* Fraction test objects */
	Fraction a(4, 2);
	Fraction b(17, 11);
	Fraction c(5);
	Fraction d;

	cout << "Fraction a: " << endl;
	cout << a; /* Calling the overloaded operator << */  
	cout << "Fraction b: " << endl;
	cout << b; /* Calling the overloaded operator << */  
	cout << "Fraction c: " << endl;
	cout << c; /* Calling the overloaded operator << */  
	cout << "Enter values for fraction d: " << endl;
	cin >> d; /* Calling the overloaded operator >> */  
	cout << "Fraction d: " << endl;
	cout << d; /* Calling the overloaded operator << */  
	cout << "Fraction a * Fraction c: " << endl;
	cout << (a * c); /* Calling the overloaded operator << */  
	cout << "Fraction a / Fraction b: " << endl;
	cout << (a / b); /* Calling the overloaded operator << */  
	return 0;
}