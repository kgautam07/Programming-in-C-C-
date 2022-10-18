/*
CH-230-A
a7_p7.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h" 

//defining struct
struct stack{
    unsigned int count;
    int array[12];
};

//function to push number into the stack
void push(struct stack *mylist,int n){   
    if (mylist->count==12){
        printf("Pushing Stack Overflow\n");   
    }
    else{
        printf("Pushing %d\n",n);
        mylist->array[mylist->count]=n;
        mylist->count= mylist->count +1;
    }
}

//function to pop a number top off the stack
void pop(struct stack *mylist){   

    if (mylist->count ==0){
        printf("Popping Stack Underflow\n");
        
    }
    else{  
        mylist->count= mylist->count -1;  
        printf("Popping %d\n",mylist->array[mylist->count]);
        mylist->array[mylist->count]=0;
    }
   
}

//function to empty stack
void empty(struct stack *mylist){   
	printf("Emptying Stack ");
   while (mylist ->count > 0){
   	
       mylist ->count = mylist->count -1;
       printf("%d ",mylist ->array[mylist->count]);
   }
   printf("\n");
}

//function to check whether the stack is empty
void isEmpty(struct stack *mylist){
   if(mylist->count == 0){
      printf("Stack is empty\n");
   }
}










