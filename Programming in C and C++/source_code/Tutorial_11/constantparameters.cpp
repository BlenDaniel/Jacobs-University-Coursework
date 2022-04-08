#include <iostream>

// not the best way to add two integer values ...
int sum_of_integers(const int a, const int b, int c) {
  // a++;  even if this would have no effects outside the
  // function, this is not allowed as with the const 
  // keyword I promised to not modify the parameter
  c = a + b;	// OK, no assumption on c. However this value
  				// will not be seen outside this function
  //a++;
  return a + b;
}
