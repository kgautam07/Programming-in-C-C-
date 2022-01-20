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
    unsigned int n;
    scanf("%d",&n);
    struct stack *mylist;
    //dynamic memory allocation
    mylist = (struct stack *)malloc(sizeof(struct stack *));
    if(mylist == NULL){
    	exit(1);//if empty, exits the execution
	}
    unsigned binary = n;
    printf("The binary representation of %d is ", binary);
    while(n !=0 ){
        push(mylist, n % 2);
        n = n/2;
    }
    
    empty(mylist);   
    free(mylist);//free memory

    return 0;
}





