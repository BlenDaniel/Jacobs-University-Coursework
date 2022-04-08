/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>

#include "Complex.h"

using namespace std;

/* Constructor that sets everything to 0 */
Complex::Complex() {  
	real = imaginary = 0;
	cout << "Default Constructor is being called" << endl;
}

/* Constructor that sets values to the object */
Complex::Complex(double newreal, double newimaginary){
    real = newreal;
    imaginary = newimaginary;
    cout << "Constructor for assigning value is being called" << endl;
}

/* Copy constructor */
Complex::Complex(const Complex &c){
    real = c.real;
    imaginary = c.imaginary;
}

/* Empty destructor function */
Complex::~Complex(){
    //delete[] real;
    //delete[] imaginary;
}


/* Method to add a complex number to the complex number where add is called from */
Complex Complex::add(Complex num){
    Complex c;
    c.setReal(real + num.getReal());
    c.setImaginary(imaginary + num.getImaginary());
    return c;
}

/* Method to return the conjugation of the complex number */
Complex Complex::conjugation(){
    Complex c(real, -1 * imaginary);
    return c;
}

/* Method to substract a complex number to the complex number where substract is called from */
Complex Complex::substract(Complex num){
    Complex c;
    c.setReal(real - num.getReal());
    c.setImaginary(imaginary - num.getImaginary());
    return c;
}
/* Method to multiply a complex number to the complex number where multiply is called from */
Complex Complex::multiplication(Complex num){
    Complex c;
    /* For multiplying complex numbers step by step */
    double a, b, k, j;
    a = real * num.getReal();
    b = real * num.getImaginary();
    k = imaginary * num.getReal();
    j = -1 * (imaginary * num.getImaginary());
    /* 
        To set the values of the new complex number c 
        with the new values 
    */
    c.setReal(a + j);
    c.setImaginary(b + k);
    return c;
}

/* Setter method implementation */
void Complex::setReal(double newReal){
    real = newReal;
}

void Complex::setImaginary(double newImaginary){
    imaginary = newImaginary;
}
/* Service method implementation */
void Complex::print(){
    cout << real << (imaginary < 0 ? "" : "+") << imaginary << "i" << endl;
}
/* Getter method implementation */
double Complex::getReal(){
    return real;
}

double Complex::getImaginary(){
    return imaginary;
}