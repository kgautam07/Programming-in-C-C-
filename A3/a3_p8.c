/*
CH-230-A
a3_p8.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
float compute_sum(float list[]){
float sum = 0;
    for (int i = 0; list[i] != -99.0; i++){
        sum += list[i];
    }
    return sum;
    }

float compute_average(float list[]){
    float sum = 0;
    int count = 0;
    
for (int i = 0; list[i] != -99.0; i++){
    sum += list[i];
    count++;
    }
float average = sum/count;
    return average;
    }   

int main(){
    float array[10];
    printf("Enter the floats:\n");
    for (int i = 0; i < 9; i++){
        scanf("%f",&array[i]);
        if (array[i] == -99.0){
            break;
        }
        
    }
    printf("Sum is %f\n",compute_sum(array));
    printf("Average is %f\n",compute_average(array));
}