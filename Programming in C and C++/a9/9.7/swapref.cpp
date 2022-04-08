/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
using namespace std;

/* Swapping integers */
void swapping(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

/* Swapping floats */
void swapping(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

/* Swapping char pointers */
void swapping(const char* &a, const char *&b) {    
    const char *temp = a;
    a = b;
    b = temp;
} 

/* main function */
int main(void) {

    /* initially the values of the variables */
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char * str1 = "One";
    const char * str2 = "Two";

    /* Printing the values before swapping */
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    /* Calling the swap methods */
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    /* Printing the variables after swapping */
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}