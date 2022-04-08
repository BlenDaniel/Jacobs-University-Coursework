#include <stdio.h>
#include <stdlib.h>
struct list {
    int info;
    struct list * next;
};
FILE * f;

void foreach_list_simple(struct list * my_list, 
                            void (*func)(int num)) {
    struct list * p ;
    for(p = my_list; p != NULL; p = p->next) {
        func(p->info);
    }
    printf("\n");
}
void printnum(int num) {
    printf("%d ", num);
}

void printnum2file(int num) {
    fprintf(f, "%d ", num);
}

int main () {
    struct list * my_list = NULL;
    struct list a, b, c;
    a.info = 1;
    b.info = 2;
    c.info = 3;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    my_list = &a;
    
    foreach_list_simple(my_list, printnum);
    
    f = fopen("output.txt", "w");
    if (f == NULL) {
		printf("Error opening file");
		exit(1);
	}
    foreach_list_simple(my_list, printnum2file);
    fclose(f);
    
    return 0;
}
