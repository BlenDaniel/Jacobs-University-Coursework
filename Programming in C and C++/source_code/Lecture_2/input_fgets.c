# include <stdio.h>
int main () {
    char line[100];
    int value;
    fgets(line, sizeof(line), stdin);
    printf("The string is %s\n", line);
    /*printf("Enter a value: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", value);
    printf("You entered: %d \n", value);*/
    return 0;
}