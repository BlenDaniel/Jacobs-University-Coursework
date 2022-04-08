#include <stdio.h>
#include "linked_list.h"
int main() {
    struct node l;
    l.info = 5;
    l.next = NULL;
    print_list(&l);
    return 0;
}
