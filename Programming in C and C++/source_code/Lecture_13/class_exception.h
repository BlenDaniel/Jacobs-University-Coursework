#ifndef _ERROR_
#define _ERROR_
#include <cstring>

/*
	defines an Error class
	receives objects via throw on exception

	provide methods to give additional information about error
*/
class Error {
	private:
		char msg[81];
	public:
		Error(const char * m) { strncpy(msg, m, 80); }
		~Error() {}
		const char *showMsg() const { return msg; }
};

#endif
