/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
using namespace std;

class A
{
  int x;

public:
  A(int i) { x = i; }
  void print() { cout << x; }
};

class B : virtual public A
{
public:
  B() : A(10) {}
};

class C : virtual public A
{
public:
  C() : A(10) {}
};

class D : public B, public C
{
public:
  D() : A(40) {}
};

int main()
{
  /* 
        error: use of deleted function 'D::D()'
        &
        error: no matching function for call to 'A::A()'

        candidate expects 1 argument, 0 provided
        class A
              ^
        
        When creating an object D with the
        default constructor, The object is created without
        implicitly defining the ancester object.

        Class D:
            D(); --Default Constructor

        The error is basically, when an object of type D 
        is created, compiler does not know how to create the 
        grandparent object A(). It does not know how to create it
        because class A need a parameter but was not given on.
        Since Class A can only be created by a value. 
        And also It does now know which parent class it should 
        create it from (B? or C?).
        i.e A does not have a default constructor.

        Since Class D extends from Class B and Class C,
        and both class B and class C extend from class A. 

        Possible solutions:
          In class D, create the A object with a parameter 
          or
          create an empty constructor in class A 
          or
          Implicity tell class D from which parent it should 
          extend from. ( This will make D not inherite the 
          methods from the other parent class. So Not a 
          good option. )              

     */

  D d;
  d.print();
  return 0;
}