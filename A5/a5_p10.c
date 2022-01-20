/*
CH-230-A
a5_p10.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
/*function declaration*/
void recursion(int n){
    if(n <= 0){
    exit(0);
    }
    else if (n == 1){
    printf("%d", n);
}
else{
    printf("%d,", n);
}
recursion(n-1); /*using recursion*/

}

int main(){
int n;
scanf("%d", &n); /*scanning input*/
recursion(n); /*using recursion*/

return 0;


}