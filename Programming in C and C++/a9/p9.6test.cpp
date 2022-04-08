/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <list>
#include <math.h>
using namespace std;

int myfirst(list<int> arr){
    //Create a list
    int result = -1;
    for (auto v : arr){
        if((v > 0) && (v % 2 == 0)){
            result = v;
            break;
        }
    }
    return result;
}

double myfirst(list<double> arr){
    //Create a list
    double result = -1.1;
    double param, fractpart, intpart;   

    for (auto v : arr){
        param = v;
        fractpart = modf(param , &intpart);
        if((param < 0.0) && (fractpart == 0.0)){
            result = param;
            break;
        }
    }
    return result;
}

bool checkConsonant(char c){
    switch (c)
    {
    case 'a':
        return false;
        break;
    case 'e':
        return false;
        break;
    case 'i':
        return false;
        break;
    case 'o':
        return false;
        break;
    case 'u':
        return false;
        break;
    case 'A':
        return false;
        break;
    case 'E':
        return false;
        break;
    case 'I':
        return false;
        break;    
    case 'O':
        return false;
        break;
    case 'U':
        return false;
        break;
    default:
        return true;
        break;
    }
}

char myfirst(string str){
    //Create a list
    char result = '0';

    for(unsigned int i = 0; i < str.length(); i++){
       if(checkConsonant(str[i])){
           result = str[i];
           break;
       }
    }
    return result;
}

int main(){
    string value = "Hello World!";
    list<int> mylist = {1, 2, 3, 4, 5, 6};
    list<double> mydoubleList = {1.1, 1.2, 1.2, -1.9, -5.0};
    /* Printing out the result */
    cout << "integer func " << myfirst(mylist) << endl;
    cout << "double func " << myfirst(mydoubleList) << endl;
    cout << "string func " << myfirst(value) << endl;  
    return 0;
}