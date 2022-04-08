/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

#define EXIT_FAILURE 1

int main() {

  /* Get the character */
  char c;
  int i = 0, sum = 0;
  /* 
   * Open file in w (write) mode. 
   * "chars.txt" is complete path to create file
   */
  FILE * fPtr;    
  fPtr = fopen("chars.txt", "w");
  if(fPtr == NULL)
  {
    /* File not created hence exit */
    printf("Unable to create file.\n");
    exit(EXIT_FAILURE);
  }
  /*Adding "ab" to the file created */
  fprintf(fPtr, "abdef");
  fclose(fPtr);

  /* 
   * Open file in r (read) mode. 
   * "chars.txt" is complete path to create file
   */
  FILE *fPin;    
  fPin = fopen("chars.txt", "r");
  /* 
   * Open file in w (write) mode. 
   * "chars.txt" is complete path to create file
   */
  FILE *fPout;
  fPout = fopen("codesum.txt", "w");

  
  if(fPin == NULL || fPout == NULL)
  {
    /* File not created hence exit */
    printf("Unable to create file.\n");
    exit(EXIT_FAILURE);
  }
 
  while((c = getc(fPin)) != EOF && i < 2)
  {
    sum += c;
    i++;
  }  
  
  fprintf(fPout, "%d\n", sum);
  /* Closing both files */
  fclose(fPout);
  fclose(fPin);

}
