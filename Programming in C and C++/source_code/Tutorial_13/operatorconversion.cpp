#include <iostream>
using namespace std;
/* 
Operator conversion
The second way to produce automatic type conversion is through operator 
overloading. You can create a member function that takes the current type 
and converts it to the desired type using the operator keyword followed by 
the type you want to convert to. This form of operator overloading is unique 
because you do not appear to specify a return type - the return type is the 
name of the operator you're overloading. Here is an example:
*/

class Four;

class Three {
	private:
		int i;
	public:
		Three(int ii = 0);
		explicit Three(const Four &);
};

class Four {
	private:
		int x;
	public:
		Four(int xx);
		operator Three() const;
		//explicit operator Three() const;
};

Three::Three(int ii) : i(ii) { 
	std::cout << "constructor Three called" << endl;
}

Three::Three(const Four &x) {
	cout << "constructor converter called" << endl;
}

Four::Four(int xx) : x(xx) {
	std::cout << "constructor Four called" << endl;
}

Four::operator Three() const { 
	std::cout << "operator converter called" << endl; 
	return Three(x); 
}

/*explicit operator Three() const {
	std::cout << "converter called" << endl; 
	return Three(x); 
}*/

void g(Three) {}

int main() {
	g(1);  // Calls Three(1)
	Four four(1);
	g(four);
	//g(Three(four));
} 

/* 
With the constructor technique, the destination class is performing
the conversion, but with operators, the source class performs the
conversion. The value of the constructor technique is that you can add
a new conversion path to an existing system as you are creating a
new class. However, creating a single-argument constructor always
defines an automatic type conversion (even if it is got more than
one argument, if the rest of the arguments are defaulted), which may
not be what you want (in which case you can turn it off using
explicit). In addition, there is no way to use a constructor
conversion from a user-defined type to a built-in type; this is
possible only with operator overloading.
*/
