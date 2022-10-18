/*
CH-230-A
a7_p7.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
    char mychar;
    int n;
    struct stack *mylist;
    //dynamic memory allocation
    mylist = (struct stack *)malloc(sizeof(struct stack *));
    if(mylist == NULL){
    	exit(1);//if empty, exits the execution
	}
    
    do{
        scanf(" %c",&mychar);
        switch (mychar){
        case 's'://for pushint
            scanf(" %d",&n);
            push(mylist,n);
            break;
        case 'p'://for poping
            pop(mylist);
            break;
        case 'e'://to empty
            empty(mylist);
            break;
        case 'q'://quits
            printf("Quit\n");
            free(mylist); //free memory
            break;
        }
    } while (mychar !='q');
    return 0;
}






