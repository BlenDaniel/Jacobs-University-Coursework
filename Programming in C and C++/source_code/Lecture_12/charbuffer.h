// this class implements a buffer of chars
class Charbuffer
{
	private:
		char *buf;   // area where data will be stored
		int size;    // number of characters actually in the buffer
	public:
		Charbuffer(const char*);      // creates a buffer from a string (NULL terminated sequence)
		Charbuffer(const char*,int);  // creates a buffer taking a certain amount of characters from a source
		Charbuffer();                 // creates an empty buffer
		Charbuffer(const Charbuffer&);// creates a copy
		~Charbuffer();                // needed to release the memory referenced by buf
		int getBufferSize() const { return size; } // self-explaining
		void getBuffer(char*) const ;              // returns the buffer
		Charbuffer& operator=(const Charbuffer&);  // overloaded assignment operator
};