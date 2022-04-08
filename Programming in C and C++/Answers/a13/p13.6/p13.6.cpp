/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /* 
        Creating a vector of Integers.
        This vector technically has only 
        20 elements. 
        i.e From Index 0 - 19
    */
    vector<int> v(20, 8);

    /* 
        Trying to access element at a specific 
        index and catching out_of_range if it occures 
        */
    try
    {
        /*Trying to access element at the index 21 */
        v.at(21);
        /* Catching the type out_of_range exception */
    }
    catch (const std::out_of_range &e)
    {
        /* Printing the error */
        std::cerr << e.what() << '\n';
    }

    return 0;
}