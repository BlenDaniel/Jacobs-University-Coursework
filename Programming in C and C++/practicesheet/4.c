#include <stdlib.h>
#include <stdio.h>



int substitute_vowels(char *s, char v){
    int count = 0;
    char *t;
    for (t = s; *t != '\0' ; t++)
    {
        if(*(t) == 'i'){
            *(t) = v;
            count++;
        }   
    }
    return count;
    
}
int main()
{
    int n;
    char s[] = "This is a sentence";
    printf("%s\n", s);
    n = substitute_vowels(s, 'o');
    printf("%s\n", s);
    printf("%d\n", n);
    return 0;
}