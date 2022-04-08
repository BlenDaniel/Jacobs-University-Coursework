/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include "stack.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv)
{
	int sizeInt = 20, sizeFloat = 10, sizeString = 5;
	Stack<int> intstack = Stack<int>(sizeInt);	   // stack with the default size
	Stack<float> floatstack = Stack<float>(sizeFloat); // stack with specified size
	Stack<string> stringStack = Stack<string>(sizeString);

	int i, valI;
	float valF;
	string valS = "hello";
	cout << "Inserting into Integer Stack" << endl;
	for (i = 0; i < sizeInt; i++)
	{
		intstack.push(i);
	}
	cout << "Printing the back element: " << intstack.back() << endl;
	cout << "Printing the size of array: " << intstack.getNumEntries() << endl;
	cout << "Popping elements out of the Int" << endl;
	for (i = 0; i < sizeInt; i++)
	{
		
		cout << intstack.pop(valI) << endl;
	}
	cout << "Printing the size of array: " << intstack.getNumEntries() << endl << endl;
	//	intstack.pop(val); // let it fail
	cout << "Inserting into Float Stack" << endl;
	for (i = 0; i < sizeFloat; i++)
	{
		

		valF = i + 0.2;
		floatstack.push(valF);
	}
	cout << "Printing the back element: " << floatstack.back() << endl;
	cout << "Printing the size of array: " << floatstack.getNumEntries() << endl;
	cout << "Popping strings out of the Float" << endl;
	for (i = 0; i < sizeFloat; i++)
	{
		
		cout << floatstack.pop(valF) << endl;
	}
	cout << "Printing the size of array: " << floatstack.getNumEntries() << endl << endl;
	//	intstack.pop(val); // let it fail
	cout << "Inserting into String Stack" << endl;
	for (i = 0; i < sizeString; i++)
	{
		
		stringStack.push(valS);
	}
	valS = stringStack.back();
	cout << "Printing the back element: " << valS << endl;
	cout << "Printing the size of array: " << stringStack.getNumEntries() << endl;
	cout << "Popping strings out of the Stack" << endl;
	for (i = 0; i < sizeString; i++)
	{
		
		cout << stringStack.pop(valS) << endl;
	}
	cout << "Printing the size of array: " << stringStack.getNumEntries() << endl << endl;
	//	intstack.pop(val); // let it fail
}