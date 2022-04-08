#include <stdio.h>
#include <math.h>
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb) {
    *prod = a*b;
    *div = a/b;
    *pwr = (float)pow((double)a, (double)b);
    *invb = 1/b;
}

int main() {
    float a = 1.0;
    float b = 2.5; 
    float p, d, pw, ib;
    proddivpowinv(a, b, &p, &d, &pw, &ib);
    printf("prod=%f\n", p);
    //.....
    return 0;
}