#include <iostream>

using namespace std;
/* 
	This function takes two parameters. Only modifications
	done on the first one are visible outside. 
*/
void oldStyle(int *outval, int inval)
{
	cout << "Inside oldStyle" << endl;
	inval++;
	(*outval)++; // need to dereference
}

/* 
	Also this function takes two parameters. Again, only 
	modifications done on the first one are visible outside. 
*/
void newStyle(int &outval, int inval) 
{
	cout << "Inside newStyle" << endl;
	inval++;
	outval++; // no need to dereference
}

int main(int argc, char** argv)
{
	int a = 0, b = 0;
	cout << a << " " << b << endl;
	oldStyle(&a, b); // needs to take the address
	cout << a << " " << b << endl;
	a = b = 0;       // reset to initial values
	newStyle(a, b);  // does not need a specific syntax to pass the paramter
	cout << a << " " << b << endl;
}