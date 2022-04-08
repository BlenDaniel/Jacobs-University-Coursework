#include "shapesrevised.h"

int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);

  //Shape s;  // would be illegal

  r.printName();
  c.printName();
  r.draw();
  r.erase();
  c.draw();
  c.erase();
  return 0;
}
