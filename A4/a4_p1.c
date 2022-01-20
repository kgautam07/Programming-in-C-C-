/*
CH-230-A
a4_p1.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include<math.h>
int main() {
    float l, u, i, x;      //declaring variables for lower limit,upper limit, 
    scanf("%f%f%f",&l,&u,&i);  // step size and radius respectively.
    
    for (x = l; x <= u; x = x + i){
        printf("%f %f %f\n", x, x*x*M_PI, 2*M_PI*x); //applying conditions
    }
        return 0;
    }
 