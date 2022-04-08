#include <stdio.h>

int main() {
   FILE *fp;
   char c;

   fp = fopen("file.txt", "w");
   c = fgetc(fp);
   if (ferror(fp)) {
      fprintf(stderr, "Error in reading from file first attempt: file.txt\n");
   }
   clearerr(fp);
   if (ferror(fp)) {
      fprintf(stderr, "Error in reading from file second attempt: file.txt\n");
   }
   c = fgetc(fp);
   printf("c=%c\n", c);
   printf("c==EOF: %d\n", c==EOF);
   fclose(fp);
   return 0;
}
