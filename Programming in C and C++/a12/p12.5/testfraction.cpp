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
	/* Fraction Test objects */
	Fraction a, b;

	/* Getting values from user for fraction objects */
	cout << "Enter Fraction number 1: " << endl;
	cin >> a; /* Calling the overloaded operator >> */  
	cout << "Enter Fraction number 2: " << endl;
	cin >> b; /* Calling the overloaded operator >> */ 

	Fraction c = a * b; /* Calling the overloaded operator * */
	Fraction d = a / b; /* Calling the overloaded operator / */
	Fraction e = a + b; /* Calling the overloaded operator + */
	Fraction f = a - b; /* Calling the overloaded operator - */

	cout << "The lesser fraction is: " << endl;
	if (a < b)	   /* Calling the overloaded operator < */
		cout << a; /* Calling the overloaded operator << */
	else
		cout << b; /* Calling the overloaded operator << */

	cout << "The greater fraction is: " << endl;
	if (a > b)	   /* Calling the overloaded operator > */
		cout << a; /* Calling the overloaded operator << */
	else
		cout << b; /* Calling the overloaded operator << */

	cout << "(Fraction 1 * Fraction 2)Fraction c:  " << endl;
	cout << c; /* Calling the overloaded operator << */

	cout << "(Fraction 1 / Fraction 2)Fraction d: " << endl;
	cout << d; /* Calling the overloaded operator << */

	cout << "(Fraction 1 + Fraction 2)Fraction e:  " << endl;
	cout << e; /* Calling the overloaded operator << */

	cout << "(Fraction 1 - Fraction 2)Fraction f: " << endl;
	cout << f; /* Calling the overloaded operator << */

	return 0;
}