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
  void setX(int i) { x = i; }
  void print() { cout << x; }
};

/* Solutions : Making it a virtual inheritance */
class B : virtual public A
{
public:
  B() { setX(10); }
};

/* Solution : Making it a virtual inheritance */
class C : virtual public A
{
public:
  C() { setX(20); }
};

class D : public B, public C
{
};

int main()
{
  D d;
  /* 
      Error "D::print" is ambiguous
      The compiler does not know from where it should
      call the print() function. 
      The tree is:
                  A
          ________|_________
          |                |
          B                C
          |________________|
                  |
                  D
        
        Class B and C inherits all the properties of A.
        This means Class B & C have print() function.
        Class D inherits all the properties of class B and C.
        i.e 
        Class A:
          SetX(i);
          print();
        Class B inherits from A:
          setX(10);
          print();
        Class C inherits from A:
          setX(20);
          print();
        Class D inherits from B and C:
          setX(10);
         v setX(20);
          print();
         v print();
        The compiler is confused which print() to call.

        Possible solutions:
          Making class B and class C extend A virtually. 
        Since Class A is inherited virtually, when an object from
        D calls the method that is in A, it will go in the order of
        inheritance to call the method.
        
      So,
      Since class D : public B, public C,
        then Print() will print the last value which is from C
           
        
          
   */

  d.print();
  return 0;
}
