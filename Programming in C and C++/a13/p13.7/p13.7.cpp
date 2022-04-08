/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/


#include <cstdio>
#include <iostream>
#include <cstring>
#include <exception>
using namespace std;


/* OwnException class */
class OwnException: virtual public exception
{
private:
    char msg[81];

public:
    OwnException(const char *m) { strncpy(msg, m, strlen(m) + 1); }
    ~OwnException() {}
    char * what(){char * str = (char *) "OwnException\n"; return str;}
    const char *showMsg() const { return msg; }
};



/* Function to catch exception */
void function(int val)
{
    switch (val)
    {
    case 1:
        throw 'a';
        break;
    case 2:
        throw 12;
        break;
    case 3:
        throw true;
        break;
    default:
        throw OwnException("Default case exception");
        break;
    }
}

/* Main functions */
int main()
{

    /* Trying to call function 4 time  */
     for (int i = 1; i <= 4; i++){
        try
        {
            function(i);   
        }
        catch (OwnException &e)
        {
            cerr << "Caught in main: " << e.what() << endl;
        }
        catch (const int n)
        {
            cerr << "Caught in main: " << n << endl;
        }
        catch (const char *str)
        {
            cerr << "Caught in main: " << str << endl;
        }
        catch (const bool b)
        {
            cerr << "Caught in main: " << b << endl;
        }
    }
    return 0;
}
