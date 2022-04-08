/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    /* Prompting a user to enter a name of file (with .txt extension) */
    string name, name_copy;
    cout << "Enter the name of the file (include .txt): ";
    getline(cin, name);

    /* Opening the file */
    ifstream in(name.c_str());

    cout << "Reading from file ...." << endl;
    /* Checking to see if the opening of the file was successful */
    if (!in.good())
    {
        cerr << "Error opening input file " << endl;
        exit(1);
    }

    /*  Erasing the extension of the string. 
        This actually makes name only the name of the 
        file without the .txt extension
        (Getting the last position of .) 
     */
    
    const unsigned int found = name.find_last_of('.'); 
    if (found != string::npos)
    {
        name_copy = name.substr(0, found);
    }

    cout << "Dumping to file...: " << endl;

    /* 
        Creating a new file by concatinating just the name of 
        the file with "_copy.txt" 
    */
    ofstream out((name_copy + "_copy.txt").c_str());
    while (!in.eof())
    {
        /* Getting every character in the file */
        char c = in.get();
        if (c != EOF)
        {
            out << c;
        }
    }
    /* Closing the files */
    in.close();
    out.close();
}