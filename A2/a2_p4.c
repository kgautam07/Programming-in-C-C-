/*
CH-230-A
a2_p4.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
int main() {
float a,b,h;
scanf("%f%f%f",&a,&b,&h);
printf("square area=%lf\n",a*a);
printf("rectangle area=%lf\n",a*b);
printf("triangle area=%lf\n",(a*h)/2);
printf("trapezoid area=%lf\n",(a+b)/2*h);

return 0;
}