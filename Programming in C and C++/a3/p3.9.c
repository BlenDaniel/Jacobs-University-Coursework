/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>

double sum25(double v[], int n);

int main() {
    // read n from the keyboard
    int n;
    scanf("%d", &n);

    // read the n doubles from the keyboard and add them to the array
    double numbers[n];
    for (int i = 0; i < n; i++) {
        double number;
        scanf("%lf", &number);
        numbers[i] = number;
    }
    
    // call the sum25 function
    double sum = sum25(numbers, n);

    // if -111 is returned print error message and end the program
    if (sum == -111) {
        printf("One or both positions are invalid\n");
        return 0;
    }

    // print the sum
    printf("sum=%lf\n", sum);

    return 0;
}

// returns sum of doubles at index 2 & 5. if they dont exist returns -111
double sum25(double v[], int n) {
    if (n <= 5) {
        return -111;
    }
    double sum = v[2] + v[5];
    return sum;
}