/*
CH-230-A
a7_p1.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
struct list *remov(struct list *my_list){
	//if list empty exit
    if (my_list==NULL){
        return my_list;
    }
	//removing first list
    my_list->info=0;
    return my_list -> next;  
}

struct list * push_front (struct list * my_list,int value ) {
    struct list *newel;
    //dynamic memory allocation
    newel = (struct list *)malloc(sizeof(struct list));
    if (newel == NULL){
        printf(" Error allocating memory \n");
        return my_list;
    }
    newel->info = value;
    newel->next = my_list;
    return newel;
}//this was function to putting items at ahead

struct list *push_back(struct list *my_list, int value){
	//putting desired item at the back of singly linked list
    struct list *cursor, *newel;
    cursor = my_list;
    newel = (struct list *)malloc(sizeof(struct list));
    if (newel == NULL){
        printf(" Error allocating memory \n");
        return my_list;
    }
    newel->info = value;
    newel->next = NULL;
    if (my_list == NULL)
        return newel;
    while (cursor->next != NULL){
        cursor = cursor->next;
    }
    cursor->next = newel;
    return my_list;
}

void print_list (struct list * my_list) {
	//printing every of list item
    struct list *p;
    for (p = my_list; p!=NULL; p = p->next){
        printf("%d ", p->info);
    }
    printf("\n");
 }

void dispose_list(struct list *my_list){
	//deleting entire listing
    struct list *nextelem;
    while (my_list != NULL){
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem;
    }
}
