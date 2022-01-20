/*
CH-230-A
a2_p8.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
int main(){

int int1;
scanf("%d",&int1);

if (int1%2==0 && int1%7==0){
printf("The number is divisible by 2 and 7\n");
}
else {
printf("The number is NOT divisible by 2 and 7\n");
}
return 0;
}