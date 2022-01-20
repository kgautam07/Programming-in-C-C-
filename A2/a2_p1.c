/*
CH-230-A
a2_p1.c
Krishna Gautam
kgautam@jacobs-university.de
*/

#include <stdio.h>
int main()
{
    double d1,d2;
    int int1,int2;
    char char1,char2;
   // printf("Enter the double 1:");
    scanf("%lf",&d1);
   // printf("Enter the double 2:");
    scanf("%lf",&d2);
   // printf("Enter the interer 1:");
    scanf("%d",&int1);
   // printf("Enter the integer 2:");
    scanf("%d",&int2);
  //  printf("Enter the character 1:");
    getchar();
    scanf("%c",&char1);
   // printf("Enter the character 2:");
    getchar();
    scanf("%c",&char2);
   // printf("Enter the double 2:");
    
   /* printf("%lf\n",d1);
    printf("%lf\n",d2);
    printf("%d\n",int1);
    printf("%d\n",int2);
    printf("%c\n",char1);
    printf("%c\n",char2); */
    
    printf("sum of doubles=%lf\n",d1+d2);
    printf("difference of doubles=%lf\n",d1-d2);
    printf("square=%lf\n",d1*d1);
    printf("sum of integers=%d\n",int1+int2);
    printf("product of integers=%d\n",int1*int2);
    printf("sum of chars=%d\n",char1+char2);
    printf("product of chars=%d\n",char1*char2);
    printf("sum of chars=%c\n",char1+char2);
    printf("product of chars=%c\n",char1*char2);


    return 0;
}