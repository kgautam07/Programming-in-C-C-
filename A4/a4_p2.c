/*
CH-230-A
a4_p2.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
int main() {
char string[50];
int i;
scanf("%[^\n]*c", string); /*scanning the input*/
for(i=0; i<50 && string[i]!='\0'; i++){
    if(i%2==0){  /* for even strings*/
        printf("%c\n", string[i]);
    }
    else{  /* for odd strings gives space*/
        printf(" %c\n", string[i]);
    }
}
    return 0;
}