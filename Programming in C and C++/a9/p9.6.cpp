/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

/* Function to return an integer */
int myfirst(int arr[], int length)
{
    /* Base case */
    int result = -1;
    for (int i = 0; i < length; i++)
    {
        /* Checking to see if the number at index i is positive and also even */
        if ((arr[i] > 0) && (arr[i] % 2 == 0))
        {
            /* 
                Assigning the value to a result integer variable to return at the 
                first occurence of the number 
            */
            result = arr[i];
            /* To stop the loop */
            break;
        }
    }
    return result;
}

/* Function to return a double */
double myfirst(double arr[], int length)
{
    /* Base case */
    double result = -1.1;
    double param, fractpart, intpart;

    for (int i = 0; i < length; i++)
    {
        param = arr[i];
        /* 
            This is a function to check if the number has a fraction part.
            if fractpart is 0 then it does not have a fraction part
        */
        fractpart = modf(param, &intpart);
        /* 
            Checking to see if the element at index number i is a negative number 
            and also if it does not have a fraction part 
        */
        if ((param < 0) && (fractpart == 0))
        {
            result = arr[i];
            break;
        }
    }
    return result;
}

/* To check if the character is a consonant or not */
bool checkConsonant(char c)
{
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

/* Function to return a character */
char myfirst(string str)
{
    /* Base case */
    char result = '0';

    for (unsigned int i = 0; i < str.length(); i++)
    {
        /* Checking to see if the character at index i is infact a consonant or not */
        if (checkConsonant(str[i]) && ((str[i] >= 'a' &&  str[i] <= 'z') || ( str[i] >= 'A' && str[i] <= 'Z')))
        {
            result = str[i];
            break;
        }
    }
    return result;
}

int main()
{
    /* Test cases */
    string value = "Hello World!";
    int mylist[] = {1, 2, 3, 4, 5, 6};
    double mydoubleList[] = {1.1, 1.2, 1.2, -1.9, -5.0};

    /* Printing out the result from myfrist functions with different parameters and results */
    cout << "\nInteger list function will return " << myfirst(mylist, 6) << endl;
    /* 
        We need to convert the double to string to print because without a 
        fraction part, cout only prints an integer 
    */
    cout << "Double list function will return " << to_string(myfirst(mydoubleList, 5)) << endl;
    cout << "String function calling with \"" << value << "\" returns " << myfirst(value) << endl
         << endl;

    return 0;
}