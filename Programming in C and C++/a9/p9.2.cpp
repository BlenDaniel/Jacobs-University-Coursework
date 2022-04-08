/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    /* Defining my variable */
    int n;
    double x;
    string s;

    /* Prompting user to input values */
    cin >> n;
    cin >> x;
    
    cin.ignore();
    /* Getting a dynamic string from user */
    getline(cin, s);
    /* Printing out the result */
    for(int i = 0; i < n; i++){
        cout << s << " : " << x << endl;
    }
    return 0;
}