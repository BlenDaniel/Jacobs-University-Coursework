/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Defining the data type person */
struct person {
    char name[30];
    int age;
};

/* To make life simpler, renaming the data type */
typedef struct person Person;

/* Printing the values in the list of person */
void printVals(Person *p, int n){
    for (size_t i = 0; i < n; i++) {
        printf("{%s, %d}; ",(*p).name, (*p).age);
        p++;
    }
    printf("\n");
    
}

/* For swaping the person with another person */
void swap(Person* a, Person* b){
    /* Constructing the holder of the temp people */
    Person temp;

    /* Copying the string value of person a's name to temp's name */
    strcpy(temp.name, a->name);
    /* Assigning temp's age the age of person a */
    temp.age = a->age;

    /* Copying the string value of person b's name to a's name */
    strcpy(a->name, b->name);
    /* Assigning a's age the age of person b */
    a->age = b->age;

    /* Copying the string value of person b's name to a's name */
    strcpy(b->name, temp.name);
    /* Assigning temp's age the age of person a */
    b->age = temp.age;
}


/* 
 * Bubble sort function that takes the list of people, size of 
 * the list and the function as to how to stort the list
 */
void bubbleSort(Person *people, size_t n, int (*comparison)(Person *p1, Person *p2)) {
    /* Iterating through the list twice */
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-1; j++) {
            /* Calling the comparision function to get result of less than 0 or greater than 0 */
            if (comparison(&people[j+1], &people[j]) < 0 ){
                /* Swaping if the condition is true */
                swap(&people[j+1], &people[j]);
            }
        }
    }
}

/* Comparision by name function */
int name_compare(Person *p1, Person *p2)
{
    /* Comparing the names by using strcmp */
    int name_cmp = strcmp(p1 -> name, p2 -> name);
    /* Comparing the ages of the two persons just incase the name is similar */
    int age_cmp = ( p2 -> age < p1 -> age ) - ( p1->age < p2->age );
    /* 
     * If the names of the persons are similar then name_cmp will 
     * be zero so we would have use the value of the age_cmp
     */
    return name_cmp != 0 ? name_cmp : age_cmp;
}

int age_compare( Person *p1, Person *p2 )
{
    /* Comparing the ages of the persons */
    int age_cmp = ( p2->age < p1->age ) - ( p1->age < p2->age );
    /* Comparing the names of the two persons just incase the age is similar */
    int name_cmp = strcmp( p1 -> name, p2 -> name );
    /* 
     * If the ages of the persons are similar then age_cmp will 
     * be zero so we would have use the value of the name_cmp
     */
    return age_cmp != 0 ? age_cmp : name_cmp;
}

int main(){
    /* Defining my variables */
    Person *people;
    char temp[30];
    int n;
    /* Prompting user to enter size of a list */    
    scanf("%d", &n);
    people = (Person *) malloc(n * sizeof(Person)); 

    /* if memory cannot be allocated */
    if(people == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }
    /* Prompting user to enter values into the list */
    for(int i = 0; i < n; i++) {        
        scanf("%s", temp); 
        /* Strcpy is used to assign the char* in the person struct */       
        strcpy(people[i].name, temp);
        scanf(" %d", &people[i].age);
    }
    /* Sorting by name compare */
    bubbleSort(people, n, name_compare);
    /* Printing the values after sorting */
    printVals(people, n);
    /* Sorting by age compare */
    bubbleSort(people, n, age_compare);
    /* Printing the values after sorting */
    printVals(people, n);

    free(people);
    return 0;

}