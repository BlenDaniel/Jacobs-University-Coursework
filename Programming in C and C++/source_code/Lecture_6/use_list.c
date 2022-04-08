#include <stdio.h>
#include "list.h"
#include "list.h"
//#include "list.h"
int main() {
    struct list l;
    l.info = 5;
    l.next = NULL;
    printf("Value: %d\n", l.info);
    return 0;
}
