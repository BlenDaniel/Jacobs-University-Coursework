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
    while (!feof(fp)) {
        ch = getc(fp);
        if (ch != EOF)        
            putchar(ch);
    }
    fclose(fp);
    return 0;
}
