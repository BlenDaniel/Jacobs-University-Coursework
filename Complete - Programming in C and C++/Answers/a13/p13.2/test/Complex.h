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

    /* Another Service Methods */
    Complex conjugation();
    Complex add(Complex c);
    Complex substract(Complex c);
    Complex multiplication(Complex c);

    //Complex operator+(const Complex);
    friend Complex operator+(const Complex, const Complex);
    friend Complex operator-(const Complex, const Complex);
    friend Complex operator*(const Complex, const Complex);
    Complex& operator=(const Complex);
    /* Operator << prototype that return an ostream(output stream)*/
	friend ostream &operator<<(ostream &out, const Complex &z);
	/* Operator >> prototype that return an istream(input stream) */
	friend istream &operator>>(istream &in, Complex &z);
};

Complex readFromFile(const string);
