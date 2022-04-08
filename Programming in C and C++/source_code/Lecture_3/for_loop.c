# include <stdio.h>
int main () {
    int idx, n, sum = 0;
    printf("Type a positive number ");
    scanf("%d", &n);
    for(idx = 1; idx <= n ; idx++) {
        printf ("Processing %d ..\n", idx);
        sum += idx;
    }
    printf("The sum is %d\n", sum);
    return 0;
}