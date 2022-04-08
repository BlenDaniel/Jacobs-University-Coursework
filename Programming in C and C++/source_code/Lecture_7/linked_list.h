#ifndef _LIST_H
#define _LIST_H
struct node {
    int info;
    struct node * next;
};
void print_list(struct node *);
#endif
