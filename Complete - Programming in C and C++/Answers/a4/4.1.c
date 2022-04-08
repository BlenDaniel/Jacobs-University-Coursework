/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>

#define PI 3.14159265358979323846

int main(){

    double  ll, ul, n;
    scanf("%lf %lf %lf", &ll, &ul, &n);

    for(int i = 0; i <= (int)ul; i++){
        printf("%lf %lf %lf\n", ll, PI * ll*ll, 2*PI*ll);
        ll += n;
    }

    return 0;
}