#include<stdio.h>
   int main(){
       float x;
       int n, idx;
       scanf("%f",&x);
       //getchar();
       scanf("%d",&n);
       while (n<=0){
           printf("Input invalid, reenter value\n");
           scanf("%d",&n);
       }
       for(idx=0;idx<n;idx++) {
           printf("%f\n",x);
       }
       return 0;
   } 

   char c;
   int n;
   double temp[100];
   scanf(...)
   scanf(...)
   loop scanf(temps...)

   Example:
   c='s'
   n=3
   4
   2
   7
   sum = 13
   c='p'
   n=4
   1
   5
   2
   2
   1 5 2 2
   c='t'
   1* 5* 2* 2*

c = '$'
n=3
4
2
7
avg = 4.....

int n = -1;
float x;
scanf("%f", &x);
while(n<=0) {
    scanf("%d", &n);
    printf("Input invalid ....");
}
int i;
for(i=0; i<n; i++)
    printf("%f\n", x);

ch = 'd'
n = 3
'd'   // ch
'c'  // ch-1
'b'  // ch-2
'a'  // ch-3
for(char i=ch; i>=ch-n; i--)
    printf("%c ", i);
