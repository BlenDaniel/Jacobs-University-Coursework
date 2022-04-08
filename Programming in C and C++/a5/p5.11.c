/*
CH-230-A
a4 p10.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Prototyping the function primenum*/
int primenum(int, int);
 
int main(){
    /*Prompt the user to input a number*/
    int num, check;
    scanf("%d", &num);

    /*Calling the recurrsive function to check if number is prime or not. The result is stored in the check variable */
    check = primenum(num, num/2);
    
    /*Printing the check if number is prime or not */
    if (check == 1){
        printf("%d is prime\n", num);
    }
    else{
        printf("%d is not prime\n", num);
    }

    return 0;
}
 
int primenum(int num, int i){

    /*Check if num/2 is 1 or not. If so, then it is prime*/
    if (i == 1){
        return 1;
    }
    else{
        /*To return false if number is infact one*/
        if(num == 1){
            return 0;
        }
        /*
        Since i is a the integer value when number is divided by two, check if 
        the number is also divided by the divident without any remainder
        */
        if (num % i == 0){        
            return 0;
        }
        else{
            /*Calling the function again but decreasing the i (which is num / 2), by one*/
            return primenum(num, i - 1);
        }       
    }
}