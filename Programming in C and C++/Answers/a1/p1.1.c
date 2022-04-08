/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/


#include <stdio.h>

int main() {
    /* The result of our calculation */
    double result; 
    /* 
        The problem was the fact that the result was being assigned to an integer instead of a double
        I just changed the denominator to a float number because C work like that.
        Even if the numerator is an integer, as long as the denominator is a double the result will
        be a float.
     */
    result = (3 + 1) / 5.0;
    /* 
        The answer is 0.000000 because when an integer is divided by an integer, it
        will return an integer but then again since result is a double, it will print result in double form
        of the actual result we get. For example, if the question asked 4/2, then answer will be 2 but since
        the type is double, it will print 2.00000. But as for 1/2, the answer is 0.5 but result 
        will be 0 since we are dividing integer by an integer, then the first leading 
        integer will be the result and thus when result is printed
        it will be 0.0000. 
    */
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}