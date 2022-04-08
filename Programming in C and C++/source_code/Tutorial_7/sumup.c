#include <stdio.h>
struct list {
    int info;
    struct list * next;
};
void foreach_list(struct list * my_list,
                    void (*func)(int num, void * state), void * state) {
    struct list * p;
    for ( p = my_list; p != NULL; p = p->next) {
        func(p->info, state);
    }
}
void sumup(int num, void * state) {
    int * p = (int *)state;
    *p += num;
}
void product(int num, void * state) {
    int * p = (int *)state;
    *p *= num;
}
int main () {
    struct list * my_list = NULL;
    struct list a, b, c;
    a.info = 1;
    b.info = -2;
    c.info = 3;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    my_list = &a;
    int sum = 0;
    foreach_list(my_list, sumup, &sum);
    printf("sum = %d\n", sum); 
    int prod = 1;
    foreach_list(my_list, product, &prod);
    printf("prod = %d\n", prod); 
    return 0;
}