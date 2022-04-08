/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <string>
using namespace std;

class Complex
{
protected:  /* Data members are private */
	double real;
	double imaginary;

public: /* Business logic methods are public */
    /* Constructors method declarations */
    Complex();
	Complex(double, double = 0);  
    /* Copy constructors method */
    Complex(const Complex &c); 
    /* Destructor of the Complex Class */
    ~Complex();

	/* Setter methods */
	void setReal(double newReal);
	void setImaginary(double newImaginary);

	/* Getter method */
    double getReal();
    double getImaginary();  
	/* Service method */
	void print();

    /* Previous Service Methods */
    Complex conjugation();
    Complex add(Complex c);
    Complex substract(Complex c);
    Complex multiplication(Complex c);

    /* Overloaded addition friend function */
    friend Complex operator+(const Complex, const Complex);
    /* Overloaded minus friend function */
    friend Complex operator-(const Complex, const Complex);
    /* Overloaded multiplication friend function */
    friend Complex operator*(const Complex, const Complex);
    /* Overloaded assignment function */
    Complex& operator=(const Complex);
    /* Overloaded output stream friend function */
	friend ostream &operator<<(ostream &out, const Complex &z);
    /* Overloaded input stream friend function */
	friend istream &operator>>(istream &in, Complex &z);
};

Complex readFromFile(const string);
