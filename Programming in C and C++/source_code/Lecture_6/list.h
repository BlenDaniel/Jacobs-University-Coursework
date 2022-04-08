#ifndef _LIST_H
#define _LIST_H
struct list {
    int info;
    struct list * next;
};
void printList(struct list *);
struct list * push_front(struct list *, int);
#endif
