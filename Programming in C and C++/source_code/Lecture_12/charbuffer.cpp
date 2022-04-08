#include <cstring>
#include "charbuffer.h"

// creates an empty buffer
Charbuffer::Charbuffer() {
	buf = NULL;
	size = 0;
}

/* Fills the buffer with characters coming from a string. Trailer \0 is not copied */
Charbuffer::Charbuffer(const char* str) {
	size = strlen(str);
	buf = new char[size];  // allocates memory 
	// could also use memcpy function from the standard C library
	for (int i = 0; i < size; i++ )
		buf[i] = str[i];
}

// creates a buffer taking chartocopy chars from src
Charbuffer::Charbuffer(const char* src, int chartocopy) {
	size = chartocopy; 
	buf = new char[size];  // allocates memory
	for (int i = 0; i < size; i++ ) // char to char copy
		buf[i] = src[i];
}
 
// creates a copy of a buffer
Charbuffer::Charbuffer(const Charbuffer& src) {
	size = src.size;  // we can access size as we are inside Charbuffer
	buf = new char[size]; // allocates space
	for (int i = 0; i < size; i++)
		buf[i] = src.buf[i];
}

// needed to release memory referenced by buf
Charbuffer::~Charbuffer() {
	if (size != 0 ) // has memory been allocated?
		delete[] buf;  // yes, release it
	size = 0;  // indicates no more memory is being referenced
}

// copies the buffer contents to dest. Warning: dest should already reference a
// big enough memory region
void Charbuffer::getBuffer(char* dest) const {
	for (int i = 0; i < size; i++)  // scans the sequence
		dest[i] = buf[i];
}

// overloaded = operator. The language provided = operator would not provide
// the right behavior
Charbuffer& Charbuffer::operator=(const Charbuffer& src) {
	if (size != 0 ) // are we pointing to something?
		delete[] buf;  // yes, release
	size = src.size;
	buf = new char[size];  // allocates new memory
	for (int i = 0; i < size; i++ ) //copies
		buf[i] = src.buf[i];
	return *this;   // returns a reference to the current instance for iterated assignments
}