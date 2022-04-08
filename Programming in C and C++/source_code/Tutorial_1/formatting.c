#include <stdio.h>
int main() {
    int a = 145;
    char c='&';
    printf("Decimal representation is %d something\n");
    printf("Octal representation %o\n", a);
    printf("Hexadecimal representation %x\n", a);
    printf("The value is %6d\n", a);
    printf("The value is %d %d %6.3f %c\n", a, 12, 1.523, c);
    printf("%.3f\n", 1.2);
    printf("%.3f\n", 1.2348);
    int x = 2, y =4;
    float div = x/(float)y;
    printf("div=%f\n", div);
    return 0;
}