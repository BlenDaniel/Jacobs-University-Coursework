/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include "Shapes.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

  /* Shapes object init */
  Shape s1;
  Shape s2("Shape");
  Shape s3(s1);

  s1.printName();
  s2.printName();
  s3.printName();

  /* Shapes object init */
  CenteredShape c1;
  CenteredShape c2("Centered Shape", 2.4, 5.6);
  CenteredShape c3(c1);

  c1.printName();
  c1.move(4.5, 6.7);
  c2.printName();
  c2.move(6.5, 4.7);
  c3.printName();
  c3.move(8.5, 1.2);

  /* Shapes object init */
  RegularPolygon r1;
  RegularPolygon r2("Regular Polygon", 8.9, 7.9, 3);
  RegularPolygon r3(r2);

  r1.printName();
  r1.move(4.5, 6.7);
  r2.printName();
  r2.move(6.5, 4.7);
  r3.printName();
  r3.move(8.5, 1.2);

  /* Shapes object init */
  Circle cr1;
  Circle cr2("Circle", 7.5, 4.6, 8.6);
  Circle cr3(cr1);

  cr1.printName();
  cr1.move(4.5, 6.7);
  cr2.printName();
  cr2.move(6.5, 4.7);
  cr3.printName();
  cr3.move(8.5, 1.2);

  /* Printing out the area and the perimeter of the circle */
  cout << "The area of circle 1 is " << cr1.Area() << endl;
  cout << "The area of circle 2 is " << cr2.Area() << endl;
  cout << "The area of circle 3 is " << cr3.Area() << endl;

  cout << "The perimeter of circle 1 is " << cr1.Perimeter() << endl;
  cout << "The perimeter of circle 2 is " << cr2.Perimeter() << endl;
  cout << "The perimeter of circle 3 is " << cr3.Perimeter() << endl;
  
  /* Shapes object init */
  Rectangle re1;
  Rectangle re2("Rectangle", 2.3, 1.5, 3.7, 2.9);
  Rectangle re3("Rectangle 1", 3.4, 2.3, 2.3, 1.2, 1.4);
  Rectangle re4(re2);

  re1.printName();
  re1.move(4.5, 6.7);
  re2.printName();
  re2.move(6.5, 4.7);
  re3.printName();
  re3.move(8.5, 1.2);
  re4.printName();
  re4.move(9.5, 1.2);

  /* Printing out the area and the perimeter of the rectangles */
  cout << "The area of Rectangle 1 is " << re1.Area() << endl;
  cout << "The area of Rectangle 2 is " << re2.Area()<< endl;
  cout << "The area of Rectangle 3 is " << re3.Area()<< endl;
  cout << "The area of Rectangle 4 is " << re4.Area()<< endl;
  
  cout << "The perimeter of Rectangle 1 is " << re1.Perimeter()<< endl;
  cout << "The perimeter of Rectangle 2 is " << re2.Perimeter()<< endl;
  cout << "The perimeter of Rectangle 3 is " << re3.Perimeter()<< endl;
  cout << "The perimeter of Rectangle 4 is " << re4.Perimeter()<< endl;

  /* Square object init */
  Square sq1;
  Square sq2("Square", 3.5, 7.2, 3.2);
  Square sq3("Square 2", 1.2, 3.8, 3.7, 2, 6, 7, 19);
  Square sq4(sq1);
  
  sq1.printName();
  sq1.move(4.5, 6.7);
  sq2.printName();
  sq2.move(6.5, 4.7);
  sq3.printName();
  sq3.move(8.5, 1.2);
  sq4.printName();
  sq4.move(9.5, 1.2);

  /* Printing out the area and the perimeter of the Square */  
  cout << "The area of Square 1 is " << sq1.Area()<< endl;
  cout << "The area of Square 2 is " << sq2.Area()<< endl;
  cout << "The area of Square 3 is " << sq3.Area()<< endl;
  cout << "The area of Square 4 is " << sq4.Area()<< endl;

  cout << "The perimeter of Square 1 is " << sq1.Perimeter()<< endl;
  cout << "The perimeter of Square 2 is " << sq2.Perimeter()<< endl;
  cout << "The perimeter of Square 3 is " << sq3.Perimeter()<< endl;
  cout << "The perimeter of Square 4 is " << sq4.Perimeter()<< endl;


}