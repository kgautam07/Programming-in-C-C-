/*
CH-230-A
a7_p1.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include "linked_list.h"
#include <stdlib.h>
int main(){
char ch;
int ma,mb;
struct list *linkedlist=NULL;
do
{
    scanf("%c",&ch);
    //use of switch to change character
    switch (ch){
    case 'a':
        scanf("%d",&ma);
        linkedlist = push_back(linkedlist,ma);
        break;
    case 'b':
        scanf("%d",&mb);
        linkedlist = push_front(linkedlist,mb);
        break;
    case 'r':
        linkedlist = remov(linkedlist);
        break;
    case 'p':
        print_list(linkedlist);
        break;
    case 'q':
        dispose_list(linkedlist);
    default:
        break;
    }
    
} while (ch !='q');
return 0;
}





