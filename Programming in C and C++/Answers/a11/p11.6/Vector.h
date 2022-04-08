/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#ifndef __VECTOR_H
#define __VECTOR_H
#include <iostream>

class Vector
{
protected: /* Data members are protected */
    int size;
    double *components;

public: /* Business logic methods are public */
    /* Constructors method declarations */
    Vector();
    Vector(const int, const double *);
    /* Copy constructors method */
    Vector(const Vector &);
    /* Destructor of the Complex Class */
    ~Vector();
    /* Setter methods */
    void setSize(const int);
    int getSize() const;
    /* Getter method */
    double *getComponents() const;
    void setComponents(const double *);
    /* Service Methods */
    void print() const;
    double norm() const;
    Vector add(const Vector v) const;
    Vector difference(const Vector v) const;
    double product(const Vector v) const;
};

#endif