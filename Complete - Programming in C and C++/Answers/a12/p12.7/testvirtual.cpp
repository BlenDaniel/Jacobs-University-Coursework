/* 
CH-230-A 
a12_p7.cpp
Bivek Panthi 
bpanthi@jacobs-university.de 
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#include "Square.h"
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"

/*
			Area			
		//			//
	Circle		 Rectangle
		//				//
	   Ring	  		 Square	


1. Area is the base class
2. Circle & Rectangle are the derived class of base class Area
3. Ring is the derived class of base class Circle
4. Square is the derived class of base class Rectangle

*/

int Choose_size()
{
	int random_num = rand();
	srand(random_num);	
	int r_num = ((random_num % 96) + 5);
	return r_num;
}

int Choose()
{
	int random_num = rand();
	srand(random_num);
	int r_num = random_num % 4;
	return r_num;
}

const int num_obj = 25;

int main() 
{
	const char* color[4] = { "RED", "BLACK" ,"VIOLET", "BLUE"};
	string shape[4] = {"Cirlce", "Ring", "Rectangle", "Square"};

	srand(time(NULL));
	Area *list[num_obj];						// (1) 'list' is the array
												// of 'num_obj' (whose value
												// is 7) objects of class Area
	int index = 0;								// (2) initializing 'index'
												// variable to 0

	double sum_area = 0.0;						// (3) initializing 'sum_area'
												// variable to 0
	double sum_perimeter = 0.0;
	//initializing 'sum_perimeter' variable to 0

	for (int i = 0; i < num_obj; i++)
	{
		switch (Choose())
		{
			case 0:
			{
				int rad = Choose_size();
				int val = Choose();
				
				list[i] = new Circle(color[val], rad);
				break;
			}

			case 1:
			{
				int in_rad, out_rad;
				int temp1 = Choose_size();
				int temp2 = Choose_size();

				//to ensure outer radius > inner radius in ring
				if ( temp1 > temp2) 
				{
					out_rad = temp1;
					in_rad = temp2;
				}

				else 
				{
					out_rad = temp2;
					in_rad = temp1;
				}

				int val = Choose();
				//Ring ring1 (color[val], out_rad, in_rad);
				list[i] = new Ring(color[val], out_rad, in_rad);
				break;
			}

			case 2:
			{
				int length = Choose_size();
				int width = Choose_size();
				int val = Choose();
				list[i] = new Rectangle(color[val], length, width);
				break;
			}

			case 3:
			{
				int side = Choose_size();
				int val = Choose();
				list[i] = new Square(color[val], side);
				break;
			}
		}
	}

	while (index < num_obj) 
	{					// (7) loops in all element of array 'list'. 
						// It runs 7 times.
		(list[index])->getColor();				
		double area = list[index]->calcArea();// (8) calculates the area
											// of each object of array 'list'
		sum_area = sum_area + area;

		double perimeter = list[index]->perimeter();				 
		sum_perimeter = sum_perimeter + perimeter;
		index++;
	}

	cout << "\nThe total area is "
			<< sum_area << " square units " << endl;	// (9) displays on
														// screen the total
														// sum of areas of all
														// objects

	cout << "\nThe total perimeter is "
			<< sum_perimeter << " units \n";
	//displays on screen the total sum of perimeters of all objects
			


	delete[] *list;
	return 0;
}

