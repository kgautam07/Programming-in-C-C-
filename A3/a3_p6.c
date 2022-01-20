/*
CH-230-A
a3_p6.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
float to_pounds(int kg, int g){
float pound = kg * 2.2 + (g/1000.0) * 2.2;
return pound;
}
    
int main(){

    int kg, g;
    scanf("%d%d",&kg,&g);
    float result = to_pounds(kg, g);
    printf("Result of conversion: %f\n",result);
}