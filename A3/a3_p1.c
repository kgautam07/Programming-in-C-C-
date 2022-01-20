/*
CH-230-A
a3_p1.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdbool.h>
int main(){
    float x;
    int n;
    scanf("%f",&x);
    while (true){
        scanf("%d",&n);
    if ( n > 0){
        
            break;
    }
        printf("Input is invaild, reenter value\n");
    }
    for (int i = 0; i < n; i++){
        printf("%f\n",x);
    }
    /**********Alternative***********
        int i;
        while ( i < n){
            printf("%f\n",x);
            i++;
        }
    *********************************/
        return 0;
}
