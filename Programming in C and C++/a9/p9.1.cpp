/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <string>

int main(){
    /* Defining my variable */
    std::string str;
    std::cout << "Where are you from? " << std::endl;
    /* Getting a dynamic string from user */
    std::getline(std::cin, str);
    /* Printing out the result */
    std::cout << "You are from " << str << "." << std::endl;
    return 0;
}