/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Complex.h"

using namespace std;

int main(int argc, char **argv)
{

	/* Test objects constructed by the default constructor */
	Complex complex1, complex2;
	Complex sum, product, minus;

	cout << "\nCalling overloaded functions" << endl;

	/* 
		Calling method to read from file and
		assigning the values
	 */
	complex1 = readFromFile("in1.txt");
	complex2 = readFromFile("in2.txt");
	cout << "The numbers are: " << endl;
	cout << complex1;
	cout << complex2;

	sum = complex1 + complex2;
	product = complex1 * complex2;
	minus = complex1 - complex2;

	/* Output file */
	ofstream out("output.txt");
	out << "The Sum is: " << endl;
	/* dumps data to a stream connected to a file */
	out << sum;
	out << "The difference is: " << endl;
	/* dumps data to a stream connected to a file */
	out << minus;
	out << "The multipliction is: " << endl;
	/* dumps data to a stream connected to a file */
	out << product;
	out.close();

	/* Printing the sum into console */
	cout << "The Sum is: ";
	cout << sum;
	/* Printing the difference into console */
	cout << "The difference is: ";
	cout << minus;
	/* Printing the multipliction into console */
	cout << "The multipliction is: ";
	cout << product;
	return 0;
}
