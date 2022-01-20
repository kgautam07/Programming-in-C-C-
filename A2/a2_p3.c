/*
CH-230-A
a2_p3.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
int main() {
int w,d,h;
printf("Enter the number of weeks, days, and hours:\n");
scanf("%d%d%d",&w,&d,&h);
w=w*7*24;
d=d*24;
printf("The total number of hours:%d\n",w+d+h);

return 0;
}