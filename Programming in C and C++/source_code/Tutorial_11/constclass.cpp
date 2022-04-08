#include <string>
#include <iostream>

using namespace std;

// model of car
class Car {

private:
	string model;            
	string manufacturer;
	int engine;  // size of the engine: cc
public:
	Car();  // empty constructor
	Car(const string, const string, int);	// creates an instance giving 
											// a value to each data member
	Car(const char*, const char*, int);		// not really necessary, the former
											// one woul achieve the same goal
	// getter methods are natural candidates to be const
	int getEngine() const;
	string getModel() const;
	string getManufacturer() const;
	// setter methods
	void setModel(const string);
	void setManufacturer(const string);
	void setEngine(const int);
	// also the print function does not modify data
	void print() const;
};const

Car::Car() {
	engine = 0;
}

Car::Car(const string m, const string f, int e) : model(m), manufacturer(f) {  // note the syntax to call the
	// constructors of the component objects model and manufacturer
	engine = e;
}

Car::Car(const char *m, const char* f, int e) : model(m), manufacturer(f) {
	engine = e;
}


// getter methods are const and just returns the data they are tied to
int Car::getEngine() const {
	return engine;
}

string Car::getModel() const {
	return string(model);
}

string Car::getManufacturer() const {
	return string(manufacturer);
}


// setter methods just copies data to data members. Please note that assign is 
// a method of the class string which replaces the content with the given string
// (could also use the overloaded = operator)
void Car::setModel(const string m)  {
	model.assign(m);
}

void Car::setManufacturer(const string m)  {
	manufacturer.assign(m);
}

void Car::setEngine(int e) {
	engine = e;
}

void Car::print() const {
	cout << manufacturer << " " << model << " " << engine << endl;
}

int main(int argc, char**argv) {

	// creates instances
	Car firstcar("Punto", "FIAT", 1100);
	const Car secondcar("Lumina", "Chevrolet", 2200); // only const methods can be called for this instance

	firstcar.print();
	secondcar.print();      // OK: const method
	firstcar.setEngine(1600);
	//secondcar.setEngine(3300);  // Cannot do this on const car
	firstcar.print();
}
