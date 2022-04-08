/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>


using namespace std;

int main(int argc, char **argv)
{
    /* Variable to hold the number of files to open */
    int n = 0;
    cout << "Enter the number of files: ";
    cin >> n;
    /* Ignoring the stream input other than the number */
    cin.ignore();

    /* Opening the file to write in, in binary mode. (i.e ios::out) */
    ofstream concatinatedFile("concatn.txt", ios::out | ios::binary);

    /*Iterating through the number of files to read */
    for (int i = 0; i < n; i++)
    {
        string name;    /* Variable for the name of the file */
        int length = 0; /* Length of the characters in the file */
        char *buffer;   /* The charactes of the file */

        cout << "Enter the names of the file: ";
        getline(cin, name); /* Get the name */

        /* Opening the output file in binary mode to read from, 
        (i.e ios::in)*/
        ifstream input(name.c_str(), ios::in | ios::binary);

        cout << "Reading from file ...." << endl;
        /* Checking to see if the opening of the file was successful */
        if (!input.good())
        {
            cerr << "Error opening input file " << endl;
            exit(1);
        }
        /* To seek towards the end of the file */
        input.seekg(0, input.end);
        /* Getting the length of the bytes in the file */
        length = input.tellg();
        /* Seeking back to the beginning */
        input.seekg(0);

        /* Dynamically initing the buffer */
        buffer = new char[length + 1];

        /* Reading from the file with the length */
        input.read(buffer, length);
        /* Adding a new line */
        strcat(buffer, "\n");
        /* Closing the file */
        input.close();
        /* Writing in the file */
        concatinatedFile.write(buffer, length + 1);
        /* Deleting the dynamically allocated buffer and also
         setting length to 0 */
        delete[] buffer;
        length = 0;
    }
    /* Closing the file */
    concatinatedFile.close();
    return 0;
}
