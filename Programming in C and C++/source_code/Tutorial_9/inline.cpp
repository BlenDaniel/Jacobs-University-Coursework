#include <iostream>

using namespace std;

#define QUAD_MACRO(number)      ((number) * (number))
inline int  quad_inline(int number) {  return number*number; }

int main(void)
{
   int z = 3;
   //z++;
   cout << "QUAD_MACRO(z) = " << QUAD_MACRO(++z) << endl;
   
   float x=1.2;
   x++;
   cout << "QUAD_MACRO(x) = " << QUAD_MACRO(x) << endl;

   z = 3;
   cout << "quad_inline(++z) = " << quad_inline(++z) << endl;
   
   return 0;
}
