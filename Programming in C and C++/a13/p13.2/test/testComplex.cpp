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


int main(int argc, char** argv){
	/* Test objects constructed by the default constructor */
    Complex c1;

	/* Test objects constructed by setting the values initially */
	Complex c2(1, -9);
	Complex c3(-7, 8);
	/* Test objects constructed by setting only one value */
	Complex c4(6);

	/* Test objects constructed by the default constructor */
	Complex c5, c6, c7, c8;
	
	/* Printing to see what the values of the objects */
	c1.print();
	c2.print();
	c3.print();
	c4.print();

	/* Calling methods of the complex class from c2 and assigning the values to new objects */
    c5 = c2.add(c3);
    c6 = c2.conjugation();
    c7 = c2.substract(c3);
    c8 = c2.multiplication(c3);

	/* Printing to see what the values of the objects */
    c5.print();
	c6.print();
	c7.print();
	c8.print();
	cout << "\nCalling overloaded functions" << endl;
	/* Calling methods of the complex class from c2 and assigning the values to new objects */
    c5 = c2 + c3;
    c6 = c2 * c3;
    c7 = c2 - c3;
    cin >> c8;

	/* Printing to see what the values of the objects */
    /*cout << c5;
	cout << c6;
	cout << c7;
	cout << c8;*/


	c7 = readFromFile("in1.txt");
	c8 = readFromFile("in2.txt");
	cout << c7;
	cout << c8;




	ofstream out("output.txt");  
	out << "The Sum is: ";	// dumps data to a stream connected to a file
	out << c7 + c8;
	out << "\nThe difference is: ";
	out << c7 - c8;
	out << "\nThe multipliction is: ";
	out << c7 * c8;
	out.close();

	cout << "The Sum is: ";
	cout << c7 + c8;
	cout << "\nThe difference is: ";
	cout << c7 - c8;
	cout << "\nThe multipliction is: ";
	cout << c7 * c8;
    return 0;
}

