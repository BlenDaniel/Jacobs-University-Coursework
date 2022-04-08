/*
CH-230-A
a4 p12.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//To replace the character c with e

void replaceAll(char *str, char c, char e) {  
  	
  	for(int i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == c)  
		{
            //replacing the with char e
  			str[i] = e;
 		}
	}
	printf("\nThe final string after replacing all Occurrences of '%c' with '%c' = %s \n", c, e, str);
} 

int main(){
    while (1)
    {
        char value[80], ch, newCh;
        //Get the string to be replaced
        printf("Enter your string: "); 
        fgets(value, sizeof(value), stdin);  

        value[strlen(value) - 1] = '\0';
        
        if (strcmp(value, "stop") == 0) {
            exit(1);
        }
        //Get the character to be replaced
        printf("Enter the character that you want to replace:  ");
        scanf("%c", &ch);
      
        getchar();

        //Get the character to be replaced by
        printf("Enter the new character:  ");
        scanf("%c", &newCh);

        getchar();      
  	
        //calling the replace function
        replaceAll(value, ch, newCh);

    }
 return 0;   
}