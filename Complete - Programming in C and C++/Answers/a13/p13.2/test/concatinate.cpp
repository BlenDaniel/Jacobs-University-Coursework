/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <fstream>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string removeSpaces(string input)
{
    input.erase(std::remove(input.begin(), input.end(), ' '), input.end());
    return input;
}

int main(int argc, char **argv)
{
    /* Prompting a user to enter a name of file (with .txt extension)*/
    string name, name_copy;
    string a, b;
    cout << "Enter the name of the file (include .txt): ";
    getline(cin, name);

    /* Opening the file */
    ifstream in(name.c_str());

    cout << "Reading from file ...." << endl;
    if (!in.good())
    {
        cerr << "Error opening input file " << endl;
        exit(1);
    }

    const unsigned int found = name.find_last_of('.');
    if (found != string::npos)
    {
        name_copy = name.substr(0, found);
    }

    stringstream strStream;
    strStream << in.rdbuf();      //read the file
    string str = strStream.str(); //str holds the content of the file

    string condensed = removeSpaces(str);

    int index = 0;
    int pos = 0;

    /* To get a in a + bi*/
    for (unsigned int i = 0; i < condensed.length(); i++)
    {
        char c = condensed[i];

        if (index == 0 && (c == '-' || c == '+'))
        {
            index++;
        }
        else if (c == '-' || c == '+')
        {
            cout << "I am here" << condensed[i-2] << endl;;
            if (condensed[i-2] == 'i')
            {
                b = condensed.substr(0, i-2);

                a = condensed.substr(i, condensed.length());
                cout << "I am here";

                a[a.length() - 1] = '\0';
            }
            else
            {
                a = condensed.substr(0, i);

                b = condensed.substr(i, condensed.length());

                b[b.length() - 1] = '\0';
            }
            break;
        }
        pos++;
    }

    cout << a << endl;
    cout << b << endl;

    stringstream ssa(a);

    // The object has the value 12345 and stream
    // it to the integer x
    float a_finale = 0;
    ssa >> a_finale;

    stringstream ssb(b);

    // The object has the value 12345 and stream
    // it to the integer x
    float b_finale = 0;
    ssb >> b_finale;

    // Now the variable x holds the value 12345
    cout << "Value of a : " << a_finale << endl;
    // Now the variable x holds the value 12345
    cout << "Value of b : " << b_finale;

    /* Closing the files */
    in.close();
}