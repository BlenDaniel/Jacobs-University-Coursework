#include <cstdio>
#include <ctime>

using namespace std;

const int COUNT = 50000;
const int RUNS = 10000;

struct x {
   int array[COUNT];
};

int b[COUNT];

void byValue(struct x a) {
   for (int i=0; i<COUNT; i++) 		// useless demo code
      b[i] = a.array[i];
}
void byReference(const struct x& a) {
   for (int i=0; i<COUNT; i++) 		// useless demo code
      b[i] = a.array[i];
}
int main(void) 
{
   struct x  someData;
   clock_t   start, stop;
   int       i;

   start = clock();
   for (i=0; i<RUNS; i++)
      byValue(someData);
   stop = clock();
   printf(" byValue: %.2lf sec\n", ((double)(stop-start)) / CLOCKS_PER_SEC);

   start = clock();
   for (i=0; i<RUNS; i++)
      byReference(someData);
   stop = clock();
   printf(" byReference: %.2lf sec\n", ((double)(stop-start)) / CLOCKS_PER_SEC);
}
