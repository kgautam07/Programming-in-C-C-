/*
CH-230-A
a3_p3.c
Krishna Gautam
kgautam@jacobs-university.de
*/

#include <stdio.h>
float convert(int cm){
float km = cm / 100000.0;
return km;
}

int main(){
   int length;
   scanf("%d",&length);
   float result = convert(length);
   printf("Result of conversion: %f\n", result);

       
}
