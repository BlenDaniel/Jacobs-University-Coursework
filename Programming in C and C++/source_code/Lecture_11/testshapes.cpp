#include "Shapes.h"

int main() {

  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);

  r.printName();
  c.printName();

}
