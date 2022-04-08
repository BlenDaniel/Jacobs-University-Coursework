#include <iostream>

using namespace std;

// This example illustrates how the operator new can be used to
// allocate memory for arrays

int main(int argc, char** argv) {
	int *iptr;
	float *fptr;
	int size;
  
	cout << "How many items?";
	cin >> size;

	iptr = new int[size];
	fptr = new float[size];

	// now iptr can be used to access a sequence of
	// "size" consecutive integers. Access can be 
	// performed via standard array access operator
	// iptr[1] = 34;

	// the same holds for fptr;
	delete [] iptr;
	delete [] fptr;
}
