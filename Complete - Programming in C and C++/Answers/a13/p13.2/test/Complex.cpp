/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <cctype>

#include "Complex.h"

using namespace std;

/* Constructor that sets everything to 0 */
Complex::Complex()
{
    real = imaginary = 0;
    cout << "Default Constructor is being called" << endl;
}

/* Constructor that sets values to the object */
Complex::Complex(double newreal, double newimaginary)
{
    real = newreal;
    imaginary = newimaginary;
    cout << "Constructor for assigning value is being called" << endl;
}

/* Copy constructor */
Complex::Complex(const Complex &c)
{
    real = c.real;
    imaginary = c.imaginary;
}

/* Empty destructor function */
Complex::~Complex()
{
    //delete[] real;
    //delete[] imaginary;
}

/* Method to add a complex number to the complex number where add is called from */
Complex Complex::add(Complex num)
{
    Complex c;
    c.setReal(real + num.getReal());
    c.setImaginary(imaginary + num.getImaginary());
    return c;
}

/* Method to return the conjugation of the complex number */
Complex Complex::conjugation()
{
    Complex c(real, -1 * imaginary);
    return c;
}

/* Method to substract a complex number to the complex number where substract is called from */
Complex Complex::substract(Complex num)
{
    Complex c;
    c.setReal(real - num.getReal());
    c.setImaginary(imaginary - num.getImaginary());
    return c;
}
/* Method to multiply a complex number to the complex number where multiply is called from */
Complex Complex::multiplication(Complex num)
{
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
void Complex::setReal(double newReal)
{
    real = newReal;
}

void Complex::setImaginary(double newImaginary)
{
    imaginary = newImaginary;
}
/* Service method implementation */
void Complex::print()
{
    cout << real << (imaginary < 0 ? "" : "+") << imaginary << "i" << endl;
}
/* Getter method implementation */
double Complex::getReal()
{
    return real;
}

double Complex::getImaginary()
{
    return imaginary;
}

/*Complex Complex::operator+(const Complex src)
{
    Complex res(this->real + src.real, this->imaginary + src.imaginary);
    return res;
}*/

Complex operator+(const Complex src1, const Complex src2)
{
    Complex res(src1.real + src2.real, src1.imaginary + src2.imaginary);
    return res;
}
Complex operator-(const Complex src1, const Complex src2)
{
    Complex res(src1.real - src2.real, src1.imaginary - src2.imaginary);
    return res;
}
Complex operator*(const Complex src1, const Complex src2)
{
    double a, b, k, j;
    a = src1.real * src2.real;
    b = src1.real * src2.imaginary;
    k = src1.imaginary * src2.real;
    j = -1 * (src1.imaginary * src2.imaginary);
    /* 
        To set the values of the new complex number c 
        with the new values 
    */
    Complex res(a + j, b + k);
    return res;
}
Complex &Complex::operator=(const Complex src)
{
    this->real = src.real;
    this->imaginary = src.imaginary;
    return *this;
}
/* Operator >> implementation, since its a friend function, 
we can access the elements of z */
istream &operator>>(istream &i, Complex &src)
{
    cout << "Enter real part: ";
    i >> src.real;
    cout << "Enter imaginary part: ";
    i >> src.imaginary;
    return i;
}
/* Operator << implementation, since its a friend function, 
we can access the elements of z */
ostream &operator<<(ostream &o, const Complex &src)
{
    string s = (src.imaginary < 0) ? " - " : " + ";
    int i = (src.imaginary < 0) ? -(src.imaginary) : (src.imaginary);
    o << src.real << s << i << "i"
      << "\n";
    return o;
}

string removeSpaces(string input)
{
    input.erase(std::remove(input.begin(), input.end(), ' '), input.end());
    return input;
}

Complex readFromFile(const string src)
{
    string a, b;
    ifstream in(src.c_str());

    cout << "Reading from file ...." << endl;
    if (!in.good())
    {
        cerr << "Error opening input file " << endl;
        exit(1);
    }



    
    stringstream strStream;
    strStream << in.rdbuf();      //read the file
    string str = strStream.str(); //str holds the content of the file

    string condensed = removeSpaces(str);
    cout << condensed << endl;
    int pos = 0;

    for (unsigned int i = 0; i < condensed.length(); i++)
    {
        char c = condensed[i];

        if (i == 0 && (c == '-' || c == '+'))
        { }
        else if (c == '-' || c == '+')
        {
            if (condensed[i-1] == 'i')
            {
                b = condensed.substr(0, i-1);
                a = condensed.substr(i, condensed.length());
                cout << "I am here" << b << "   " << a << endl;

            }
            else
            {
                a = condensed.substr(0, i);

                b = condensed.substr(i, condensed.length());

                b[b.length() - 1] = '\0';
            }
            break;
        }
        pos++;
    }

    cout << a << endl;
    cout << b << endl;

    stringstream ssa(a);

    // The object has the value 12345 and stream
    // it to the integer x
    double a_finale = 0;
    ssa >> a_finale;

    stringstream ssb(b);

    // The object has the value 12345 and stream
    // it to the integer x
    double b_finale = 0;
    ssb >> b_finale;

    // Now the variable x holds the value 12345
    cout << "Value of a : " << a_finale << endl;
    // Now the variable x holds the value 12345
    cout << "Value of b : " << b_finale << endl;

    /* Closing the files */
    in.close();

    Complex c(a_finale, b_finale);
    return c;
}