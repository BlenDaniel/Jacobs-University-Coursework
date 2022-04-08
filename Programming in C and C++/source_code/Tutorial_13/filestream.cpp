// Revised Eckel's example

#include <fstream>  
#include <iostream>
#include <cstdlib>

using namespace std;

/* 
The program should be invoked with two arguments: the name 
of the input file to process and the name of the output file
to produce. The output file will be like the input file, but
with line numbers inserted at the beginning of each line
*/

int main(int argc, char** argv) {
	const int SZ = 100; // Buffer size
	char buf[SZ];// buffer to read lines

	if (argc != 3) {  // tests if all parameters have been provided
		cerr << "Usage: filestream input output" << endl;
    	exit(1);
	}
  
	ifstream in(argv[1]); 		// Read   
	if (!in.good()) {
		cerr << "Error opening input file " << endl;
		exit(2);
	}
	
	ofstream out(argv[2]); 		// Write
	if (!out.good()) {
		cerr << "Error opening output file" << endl;
		exit(3);
	}

	int i = 1; // Line counter

	// A less-convenient approach for line input:
	while(in.get(buf, SZ)) { 	// Leaves \n in input
		in.get(); 				// Throw away next character (\n)
		//cout << buf << endl; 	// Must add \n
		// File output just like standard I/O:
		out << i++ << ": " << buf << endl;
	}

	// close files
	in.close(); 
	out.close();

	// reopens the output file (but as input!!) and prints its contents
	// to the screen
	in.open(argv[2]);
	in.clear(); //clear eof bit

	while (in.getline(buf,SZ)) {
		cout << buf << endl;
	}
	// not necessary to close; destructor will do that
	// but it would be nicer anyway
} 
