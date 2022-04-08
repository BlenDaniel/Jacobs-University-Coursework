/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>

float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

int main() {
    // reads the values of a and b from the keyboard
    float a, b;
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);

    // creates pointer variables for a and b
    float* ptr_a = &a;
    float* ptr_b = &b;

    // variables to store the products
    float product_by_ref = 1;
    float product_by_value = 1;
    
    // calling the functions with their correct arguments
    product_by_value = product(a, b);
    productbyref(a, b, &product_by_ref);
    modifybyref(ptr_a, ptr_b);
    
    // printing the results to the screen
    printf("Product by Value: %f\n", product_by_value);
    printf("Product by Reference: %f\n", product_by_ref);
    printf("\n");
    printf("Value of a after calling modifybyref: %f\n", a);
    printf("Value of b after calling modifybyref: %f\n", b);
  
    return 0;
}

// returns the product of two floats by value
float product(float a, float b) {
    return a * b;
}

// returns the product of two floats by reference
void productbyref(float a, float b, float *p) {
    *p = a * b;
}

// modify the floats by reference adding 3 to the 1st and 11 to the 2nd one
void modifybyref(float *a, float *b) {
    *a = *a + 3;
    *b = *b + 11;
}