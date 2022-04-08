/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

/* Implementation of Vector */
Vector::Vector()
{
    size = 2;
    components = new double[2];
    components[0] = 0;
    components[1] = 0;
    cout << "Default constructor has been called on Vector" << endl;
}

/* Parametric constructor */
Vector::Vector(const int newSize, const double *newComponent) : size(newSize)
{
    components = new double[newSize];
    for (int i = 0; i < newSize; i++)
    {
        components[i] = newComponent[i];
    }
    cout << "Parametric constructor has been called on Vector" << endl;
}

/* Copy Constructor */
Vector::Vector(const Vector &src)
{
    size = src.size;
    components = new double[size];
    for (int i = 0; i < src.size; i++)
    {
        components[i] = src.components[i];
    }
    cout << "Copy constructor has been called on Vector" << endl;
}

/* Destructor of Vector */
Vector::~Vector()
{
    delete[] components;
    cout << "Destructor has been called on Vector" << endl;
}

void Vector::print() const
{
    cout << "The Vector has " << size << " components." << endl;
    if (size > 0)
    {
        cout << "The components are: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << components[i] << ", ";
        }
    }
    cout << endl;
}

/* Getter method implementation */
int Vector::getSize() const
{
    return size;
}
double *Vector::getComponents() const
{
    return components;
}

/* Setter method implementation */
void Vector::setSize(const int newSize)
{
    size = newSize;
}
void Vector::setComponents(const double *newComponent)
{
    components = new double[size];
    for (int i = 0; i < size; i++)
        {
            components[i] = newComponent[i];
        }
       
}

/* Function to get the maginitude of a vector */
double Vector::norm() const
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + (components[i] * components[i]);
    }
    return sqrt(sum);
}

/* Function to get the addition of two vectors */
Vector Vector::add(const Vector src) const
{
    Vector result;
    result.size = size;
    for (int i = 0; i < size; i++)
    {
        result.components[i] = components[i] + src.components[i];
    }    
    return result;
}
/* Function to get the difference between two vectors */
Vector Vector::difference(const Vector src) const
{
    Vector result;
    result.size = size;
    for (int i = 0; i < size; i++)
    {
        result.components[i] = components[i] - src.components[i];
    }    
    return result;
}
/* Function to get the scalar product */
double Vector::product(const Vector src) const
{
    double product = 0;
    for (int i = 0; i < size; i++)
    {
        product = product + (components[i] * src.getComponents()[i]);
    }
    
    return product;
}