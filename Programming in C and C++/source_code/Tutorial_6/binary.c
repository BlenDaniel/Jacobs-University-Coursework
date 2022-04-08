#include <stdio.h>
char str[sizeof(int) * 8 + 1];
const int maxbit = sizeof(int) * 8 - 1;
char * itobin(int n, char * binstr) {
    int i;
    for(i = 0; i <= maxbit; i ++) {
        if ( n & (1 << i) ) {
            binstr[maxbit - i] = '1';
        }
        else {
            binstr[maxbit - i] = '0';
        }
    }
    binstr[maxbit + 1] = '\0';
    return binstr;
}
int main ()
{
    int n ;
    while (1) {
        scanf("%d", &n);
        if (n < 0) 
            break;
        printf("%6d : %s\n", n, itobin(n, str));
    }
    return 0;
}
