/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <algorithm> // reverse
#include <map>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    map<string, string> dateofBirth;

    string name_query;

    map<string, string>::iterator result; // insert returns a pair: an interator
    /* Opening the file */
    ifstream in("data.txt");

    //cout << "Reading from file ...." << endl;
    /* Checking to see if the opening of the file was successful */
    if (!in.good())
    {
        cerr << "Error opening input file " << endl;
        exit(1);
    }

    //cout << "Dumping to file...: " << endl;

    string f_name, l_name, birthday;

    while (in >> f_name >> l_name >> birthday)
    {
        //cout << name << endl
        //     << birthday;
        dateofBirth[f_name + " " + l_name] = birthday;
    }

    /* Closing the files */
    in.close();

    cout << "Enter name of a student to get their birthday, or Enter \"END\" to quit program " << endl;
    while (true)
    {
        cout << "Enter Name: ";
        getline(cin, name_query);
        if (name_query.compare("END") == 0)
            break;
        result = dateofBirth.find(name_query);

        if (result == dateofBirth.end())
        {
            cout << "Name not found! " << endl;
        }
        else
        {

            cout << name_query << " -> " << dateofBirth[name_query] << endl;
        }
    }

    return 0;
}