/*
CH-230-A
a2_p5.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
int main() {
int a;
printf("Enter an integer (a):");
scanf("%d",&a);
printf("Value of a is %d\n",a);

int *ptr_a = &a;

printf("Address of a: %p\n",ptr_a); 
*ptr_a = *ptr_a + 5;
printf("Modified value: %d\n",*ptr_a); 
printf("Address: %p\n",ptr_a);

return 0;
}