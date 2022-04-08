/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Proto type of my function pointer */
char* (*change_str) (char*);

/* All upper case letter changer */
char* upper_case(char *str){
   /* Copying the string so that I won't replace it  */ 
   const size_t len_my_str = strlen(str) + 1;
   char * my_copy = malloc(len_my_str);
   strncpy(my_copy, str, len_my_str);
   char *s = my_copy;
   /* Convert to upper case */ 
   while(*s) 
   {
      /*Check is the value is not between lower case a and z to change it */
      if(*s >= 'a' && *s <= 'z') {
         *s-= 32;
      }
      s++;
   }
   
   return my_copy;
}

/* All lower case letter changer */
char *lower_case(char *str){
   /* Copying the string so that I won't replace it  */ 
   const size_t len_my_str = strlen(str) + 1;
   char * my_copy = malloc(len_my_str);
   strncpy(my_copy, str, len_my_str);
   char *s = my_copy;
   /* Convert to lower case */
   while (*s) { 
      /*Check is the value is not between upper case A and Z to change it */    
      if(*s >= 'A' && *s <= 'Z') {
         *s = *s + 32;
      }
      s++;
   }
   return my_copy;
}

char * lower_upper(char *str){
   /* Copying the string so that I won't replace it  */ 
   const size_t len_my_str = strlen(str) + 1;
   char * my_copy = malloc(len_my_str);
   strncpy(my_copy, str, len_my_str);
   char *s = my_copy;
   /* Convert lower cases to upper and upper cases to lower */
   while (*s) { 
      /*Check is the value is N not between upper case A and Z to change it */      
      if(*s >= 'A' && *s <= 'Z') 
      {
         *s += 32;
      } 
      /*Check is the value is between not lower case a and z to change it */
      else if(*s >= 'a' && *s <= 'z') 
      { 
         *s -= 32;
      }
      s++;
   }
   return my_copy;
}

char* readinput(){
   /* Define the chunk value or the max length of my strings */
   #define CHUNK 100
   /* Input is set to null initially */
   char* input = NULL;
   /* temp character array is set with length of CHUNK */
   char tempbuf[CHUNK];
   size_t inputlen = 0, templen = 0;

   do {
      /* Getting input with length of tempLen */
      fgets(tempbuf, CHUNK, stdin);

      templen = strlen(tempbuf);
      /* When reallocating */
      input = realloc(input, inputlen+templen+1);

      strcpy(input+inputlen, tempbuf);

      inputlen += templen;
      /* Strip the '\n' from the string */
      input[strcspn(input, "\n")] = 0;
      
   } while (templen==CHUNK-1 && tempbuf[CHUNK-2]!='\n');
   
   return input;
}

int main(){
   /* Getting input string */
   char* str = readinput(); 
   int command = 0; 
   /* Running while loop until number 4 is entered */
   while (command != 4)
   {
      /* Prompting user to enter a number */
      scanf("%d",&command);
      /* The condition to use which the function pointer */
      change_str = command == 1 ? upper_case : command == 2 ?  lower_case : lower_upper;
      /* If the command if 4, then not print anything */
      if(command != 4)
         printf("%s\n", change_str(str));

   }   
   /* deallocating the memory */ 
   free(str);
    
}