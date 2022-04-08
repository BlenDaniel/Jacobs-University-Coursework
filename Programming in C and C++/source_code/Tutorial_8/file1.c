#include <stdio.h>
#include <stdlib.h>
int main() {
    char ch;
    FILE * fp;
    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Cannot open file !\n");
        exit(1);
    }
    ch = getc(fp);
    while(ch != EOF) {
        putchar(ch);
        ch = getc(fp);
    }
    fclose(fp);
    return 0;
}
