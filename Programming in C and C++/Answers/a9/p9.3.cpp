/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

float abs(float num){
    /* Checking to see if the number is below 0 or not */
    if(num < 0){
        /* If number is below 0 then multiply it by - to get the actual value */
        return -(num);
    }else{
        return num;
    }
}

int main(){
    /* Defining my variable */
    double x;

    cout << "Enter a number: ";
    /* Prompting user to input values */
    cin >> x;
    
    /* Printing out the result */
    cout << "The absolute value of the number is: " << abs(x) << endl;
    return 0;
}