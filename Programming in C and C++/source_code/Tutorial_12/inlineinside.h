#ifndef __SIMPLE
#define __SIMPLE

#include <string>

/* 
	Simple example of a class with inline methods defined
   inside class declaration 
 */
class SimpleInline {
private:
	int anint;
	std::string somestring;
 public:
	SimpleInline() {}; // inline empty constructor
	SimpleInline(const std::string& a, int s) : somestring(a) { anint = s; } 
	int getInt() const {return anint; }
	void setInt(int newint) { anint = newint; }
	void setString(const std::string& a) { somestring = a; }
	std::string getString() const { return somestring; }
};

#endif
