/*
CH-230-A
a8_p6.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char file1[100];
char file2[100];
double p, q, sum, diff, prod, div;
scanf("%s",file1);
scanf("%s",file2);

FILE *rptr1 = fopen(file1, "r"); //pointer to open the first file
if( rptr1 == NULL){
    printf("Cannot open file!\n");
    exit(1);
}
fscanf(rptr1, "%lf", &p); //scans the elements of first file

FILE *rptr2 = fopen(file2, "r");// pointer to open the second file
if( rptr2 == NULL){
    printf("Cannot open file!\n");
    exit(1);
}
fscanf(rptr2, "%lf", &q); //scans the elements of second file

FILE *wptr = fopen("results.txt", "w"); //for writing in result file
if (wptr == NULL){
    printf("Some error occured!\n");
    exit(1);
}
//calculating sum, product, difference and division
    sum = p + q;
    diff = p - q;
    prod = p * q;
    div = p / q;

// wptr prints the result of computation to results.txt
fprintf(wptr, "Sum is: %lf\n", sum);
fprintf(wptr, "Difference is:%lf\n", diff);
fprintf(wptr, "Product is: %lf\n", prod);
fprintf(wptr, "Division is:%lf\n", div);
 
//closing files
fclose(rptr1);
fclose(rptr2);
fclose(wptr);

return 0;
}