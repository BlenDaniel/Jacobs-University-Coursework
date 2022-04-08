#ifndef __SIMPLE
#define __SIMPLE

#include <string>

/* 
	Simple example of a class with inline methods defined
	outside class declaration 
*/
class SimpleInline {
private:
	int anint;
	std::string somestring;
public:
	SimpleInline(); 
	SimpleInline(const std::string&, int);
	int getInt() const;
	void setInt(int);
	void setString(const std::string&); 
	std::string getString() const;
};

inline SimpleInline::SimpleInline() {
}

inline SimpleInline::SimpleInline(const std::string& a, int s) : somestring(a) {
	anint = s; 
} 

inline void SimpleInline::setString(const std::string& a) { 
	somestring = a; 
}

inline void SimpleInline::setInt(int newint) { 
	anint = newint;
}

inline int SimpleInline::getInt() const {
	return anint;
}

inline std::string SimpleInline::getString() const {
	return somestring;
}

#endif
