/*
CH-230-A
a2_p10.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    while(true){
        scanf("%d",&n);
    if (n > 0){
        break;
    }
    } 

    int i = 1;
        printf( "%d day = %d hours\n", i, i *24);

    while (n > i){
        printf( "%d days = %d hours\n", (i+1), (i+1) *24);
        i++;


    }
        return 0;
    }
