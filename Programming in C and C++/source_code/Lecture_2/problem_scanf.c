# include <stdio.h>
int main () {
    int nr;
    char ch;
    scanf("%d %c", &nr, &ch);
    /*getchar();
    scanf("%c", &ch);*/
    printf("nr = %d, ch = %c\n", nr, ch);
    return 0;
}