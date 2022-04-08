/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

const int num_obj = 7;
int main()
{
	/*
					Area
				______|_______
				|            |
			 Circle     Rectangle  (Circle and Rectangle inherite from Area)
			   |			 |
			  Ring 			Square
	(Ring inherits from Circle)
		
	*/

	/*
		(1) A pointer to a list of Areas is being initiated. Since area is
			an abstract class, Area list can not be initiated. But a pointer
			to a list of Areas is possible. 

	*/
	Area *list[num_obj]; // (1)
	/* 
		(2) A integer variable called index is being initialized with a 
			0 value 
	*/
	int index = 0; // (2)
	/*
		(3) A double variable named sum_area is being initialized with a
			value of 0.0
	*/
	double sum_area = 0.0; // (3)
	/*
		A double variable named sum_perimeter is being initialized with a
			value of 0.0
	*/
	double sum_perimeter = 0.0;
	cout << "Creating Ring: ";
	/*
		(4) A Ring object with a color, radius and inner radius is being	
			initialized. The color and radius are properties inherited from	
			parent and grand-parent class, Circle and Area respectively.
	*/
	Ring blue_ring("BLUE", 5, 2); // (4)
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN", 5, 6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square orange_square("ORANGE", 20);

	/*
		(5) list - the name of the array of Areas
			Adding the addresses of objects (childrens of Area or 
			Area itself) into "list". They are being 
			added at specific indexes.
	*/
	list[0] = &blue_ring; // (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &orange_square;

	while (index < num_obj)
	{ /*
		(7) Until index is equal to the num_obj value, the 
			loop will iterate through list(List of Areas or 
			childrens of areas) and calling the method getColor()
			and assigning a new variables double area to the 
			return value of calcArea() of the specific index 
			element in list. Since it is index++, this means 
			execute index first and	increment it later. Finally 
			making the sum_area to the sum of it's 
			initial value and the new area. 
			
	*/
		// (7)
		(list[index])->getColor();

		double perimeter = list[index]->perimeter();
		cout << "\nThe perimeter is: " << list[index]->perimeter() << endl;
		cout << "\nThe area is: " << list[index]->calcArea() << endl;
		/*
			(8) Creating a new double variable area that has a value of
				the calcArea() function's return value from element at 
				index number index from list and incrementing index by
				one after finishing the calling of the function.
		*/
		double area = list[index++]->calcArea(); // (8)
		sum_area += area;
		sum_perimeter += perimeter;
	}
	/*
		(9) Printing the value of the sum_area variable.
	*/
	cout << "\nThe total area is "
		 << sum_area << " units " << endl; // (9)
	cout << "\nThe total perimeter is "
		 << sum_perimeter << " units \n"
		 << endl;
	return 0;
}
