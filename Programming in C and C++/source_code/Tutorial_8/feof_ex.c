#include <stdio.h>

int main () {
   FILE *fp;
   int c;
  
   fp = fopen("myfile.txt","r");
   if(fp == NULL) {
      fprintf(stderr, "Error in opening file\n");
      return -1;
   }
   while(1) {
      c = fgetc(fp);
      if (feof(fp)) { 
         break;
      }
      printf("%c", c);
   }
   fclose(fp);
   return 0;
}
