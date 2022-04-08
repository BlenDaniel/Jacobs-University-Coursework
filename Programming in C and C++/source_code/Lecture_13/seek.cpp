#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main() {
    ifstream anIfstream;
    if (!anIfstream.is_open())			// check is_open
       anIfstream.open("seek.dat", ios::binary|ios::in);
	   
    anIfstream.seekg(5);				// absolute read position
    char c;
    anIfstream.get(c);                  // get increments pos.
    cout << c << " found at position 5" << endl;
    ios::pos_type position = anIfstream.tellg();
    cout << "after get() at position " << position << endl;
    // move 2 relative to current position (6) 
    anIfstream.seekg(2, ios::cur);
    position = anIfstream.tellg();
    cout << "at position " << position << endl;
    anIfstream.get(c);
    cout << c << " found at position 8" << endl;
    anIfstream.seekg(-4, ios::end);  // 4 positions before end
    anIfstream.get(c);
    cout << c << " found at fourth last position" << endl;
    anIfstream.seekg(position, ios::beg);  // go back to old position (8)
    anIfstream.get(c);
    cout << c << " found at position 8" << endl;
}
