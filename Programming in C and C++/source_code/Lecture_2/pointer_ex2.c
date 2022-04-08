# include <stdio.h>
int main () {
    int thing_var ; /* def . var . for a thing */
    int * thing_ptr ; /* def . pointer to a thing */
    thing_var = 2; /* assign a value to a thing */
    printf("Thing %d \n", thing_var);
    thing_ptr = &thing_var; /* make the pointer
    point to thing_var */
    *thing_ptr = 3; /* thing_ptr points to
    thing_var , so thing_var changes to 3 */
    printf("Thing %d \n", thing_var);
    printf("Thing %d \n", *thing_ptr);
    /* another way */
    return 0;
}