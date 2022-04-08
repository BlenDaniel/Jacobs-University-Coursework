#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cerrno>	// for Errorcodes
void errortest (FILE *, char *, bool);	// Prototype	

FILE * stream;
char string[] = "Test";
void errortest (FILE *stream, const char* msg, bool fterm){
	if ((stream == NULL) || (ferror(stream))) {
		perror (msg);
		printf("%s: %s\n", msg, strerror(errno));
		if (fterm)
			exit(errno);
		else
			clearerr(stream);
	}
}
int main(int argc, char * argv[]) {
	stream = fopen(argv[1], "r");
	errortest(stream, "Error opening file", true);
	fprintf(stream, "%s\n", string);
	errortest(stream, "Error writing to file", false);
	return 0;
}
