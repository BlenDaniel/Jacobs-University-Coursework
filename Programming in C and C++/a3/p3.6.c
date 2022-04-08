/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>


float to_pounds(int kg, int g);

int main(){
    int mass_in_kg, mass_in_g;
    scanf("%d %d", &mass_in_kg, &mass_in_g);
    printf("Result of conversion: %f", to_pounds(mass_in_kg, mass_in_g));
    return 0;
}

float to_pounds(int kg, int g){
    return (2.2 * kg) + (2.2 * (g / 1000.0));
}