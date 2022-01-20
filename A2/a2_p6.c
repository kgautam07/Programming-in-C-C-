/*
CH-230-A
a2_p6.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
int main(){
   double x, y;
   scanf("%lf%lf",&x,&y);
   double *ptr_one = &x;
   double *ptr_two = &x;
   double *ptr_three = &y;
   printf("Memory address of ptr_one and ptr_two are %p and %p\n",ptr_one, ptr_two);
   printf("Memory address of ptw_three is %p",ptr_three);

}
    