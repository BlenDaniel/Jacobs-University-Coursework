/*
CH-230-A
a4 p10.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Function to replace the values of the pointed variables
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb) {
    *prod = a * b;
    *div = a/b;
    *pwr = pow(a, b);
    *invb = 1/b;
}

int main(){
    //To get the first float
    float float1;
    printf("Enter float 1: ");
    scanf("%f", &float1);
    //To get the second float
    float float2;
    printf("Enter float 2: ");
    scanf("%f", &float2);

    float prod = 0.0;
    float div = 0.0;
    float pwr = 0.0;
    float invb = 0.0;
    //Function is called
    proddivpowinv(float1,float2, &prod, &div, &pwr, &invb);
    //Print of respective values
    printf("The first float is: %f\n", float1);
    printf("The second float is: %f\n", float2);
    printf("The product of the two is: %f\n", prod);
    printf("The division of the two is: %f\n", prod);
    printf("float 1 the power of float 2 is: %f\n", prod);
    printf("The inverse of the second float is: %f\n", invb);

    return 0;
}