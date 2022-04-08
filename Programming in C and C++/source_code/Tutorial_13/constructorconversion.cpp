#include <iostream>

class One {
public:
	One() {}
};

class Two {
public:
	Two(const One&) {}
};

void f(Two) {}

int main() {
	One one;
	f(one); // Wants a Two, has a One
} 


/*
	When the compiler sees f( ) called with a One object, it looks at the 
	declaration for f( ) and notices it wants a Two. Then it looks to see 
	if there's any way to get a Two from a One, and it finds the constructor 
	Two::Two(One), which it quietly calls. The resulting Two object is handed 
	to f( ).

	In this case, automatic type conversion has saved you from the trouble of 
	defining two overloaded versions of f( ). However, the cost is the hidden 
	constructor call to Two, which may matter if you're concerned about the 
	efficiency of calls to f( ).
*/
