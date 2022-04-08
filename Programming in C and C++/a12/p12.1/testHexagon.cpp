/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Shapes.h"

using namespace std;

int main()
{
    /* Creating my hexagons */
    Hexagon h1("One", 0, 0, "Blue", 9);
    Hexagon h2("Two", 0, 0, "Green", 15);
    Hexagon h3(h2);

    /* Printing perimteres of each object */
    cout << "The perimeters of the hexagons are :  " << endl;
    cout << "Hexagon 1 : " << h1.perimeter() << endl;
    cout << "Hexagon 2 : " << h2.perimeter() << endl;
    cout << "Hexagon 3 : " << h3.perimeter() << endl;

    /* Printing areas of each obect */
    cout << "The areas of the hexagons are : " << endl;
    cout << "Hexagon 2 : " << h1.area() << endl;
    cout << "Hexagon 2 : " << h2.area() << endl;
    cout << "Hexagon 3 : " << h3.area() << endl;

    return 0;
}