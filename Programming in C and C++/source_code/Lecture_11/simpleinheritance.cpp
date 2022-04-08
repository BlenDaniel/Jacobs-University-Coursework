#include <iostream>

using namespace std;

// normally the implementation should be in an extra file
// for demonstration purposes, we put everything into one file

class myBaseClass{
	private:
		int basevar;
	public:
		myBaseClass() { 
			cout << endl << "myBaseClass: empty constructor " << endl;  
			basevar = 77; 
		}
		myBaseClass(int b) { 
			cout <<  endl << "myBaseClass: constructor, setting basevar to " << b << endl;  
			basevar = b; 
		}
		~myBaseClass() { 
			cout << "myBaseClass: destructor " << endl; 
		}
		int getBasevar () { 
			return basevar; 
		}
		void print() {
			cout << "myBaseClass: print() basevar: " << basevar << endl;
		}
};

class myDerivedClass : public myBaseClass {
	private:
		int derivedvar;
	public:
		// here the base constructor will automatically be called
		// BEFORE this constructor is being executed
		myDerivedClass() { 
			cout << "myDerivedClass: empty constructor " << endl; 
			derivedvar = 99;
		}
		// the base constructor is explicitly called with specific parameter
		// this happen BEFORE this constructor is actually being executed
		myDerivedClass(int b, int d) : myBaseClass(b) { 
			cout << "myDerivedClass: constructor, setting derivedvar to " << d << endl; 
			derivedvar = d;
		}
		// first the derived destructor will be run, then the base destructor
		~myDerivedClass() { 
			cout << "myDerivedClass: destructor " << endl;
		}
		void print() {
			// we explicitly call the method with same name of base class
			myBaseClass::print();
			// please try out, it will not work since basevar is private
			//cout << "myDerivedClass: print() basevar:" << basevar << " derivedvar:" << derivedvar << endl;
			
			// here you can see basevar is private but is still there
			// it can be accessed through public interface
			cout << "myDerivedClass: print() basevar: " << getBasevar() << " derivedvar: " << derivedvar << endl;
		}
};

int main() {

	myDerivedClass x;
	x.print();

	myDerivedClass y(1, 2);
	y.print();

	return 0;
}