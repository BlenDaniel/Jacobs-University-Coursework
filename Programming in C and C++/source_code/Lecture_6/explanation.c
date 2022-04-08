ternary operator
int x = (a>b) ? 10 : 12;

#define SQR(A) (A)*(A)

print: SQR(5+1)

5+1 * 5+1 = 5 + 5 + 1 = 11 
(5+1) * (5+1) = 6 * 6 = 36

int i = 5;
print: SQR(++i)

(++i)*(++i) = 6*7 = 42

++i;
SQR(i)

#define LEN(S) strlen(S)

LEN(5.454)

11001110 &
01101001
========
01001000

true:  11001110 &&
false: 00000000
========
0 (false)


1100111011001110&
0000000001101001

00000010 decimal = 2
00000010 << 2 = 00001000 decimal = 8

char c = 8;
int x = 8;
x = x << 2;
printf("%d", x);

00000110 (i1=6)  &
00000010 (i2=2)
========
00000010  (True)