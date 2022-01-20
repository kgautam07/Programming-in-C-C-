/*
CH-230-A
a3_p5.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>

    void sumtemp(double temp[], int n){
        double sum = 0.0;
        for(int i = 0; i < n; i++){
            sum = sum + temp[i];
        }
        printf("Sum of temperatures:%lf",sum);
    }
    void list(double temp[], int n){
        printf("The list of all temperatures:\n");
        for (int i = 0; i < n; i++){  
            printf("%lf\n",temp[i]);
        }
    }

    void list_ft(double temp[], int n){
        printf("The list of all temperatures in fahrenheight:\n");
        for (int i = 0; i < n; i++){
            temp[i] = (double) 9 / 5 * temp[i] + 32.0;
        }
        for (int i = 0; i < n; i++){
            printf("%lf\n",temp[i]);
        }
    }
    void average(double temp[], int n){
        double sum = 0;
        double average;
        for (int i = 0; i < n; i++){
            sum = sum + temp[i];
        }
        average = (double)sum/n;
        printf("Average of all temperatures:%lf",average);
    }

int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    int n;
    printf("Enter an integer:");
    scanf("%d",&n);

    double temp[100];
    printf("Enter the temperatures:\n");
    for (int i = 0; i < n; i++){
        scanf("%lf",&temp[i]);
    }

    switch(ch){
        case 's':
            sumtemp(temp, n);
            break;
        
        case 'p':
            list(temp, n);
            break;

        case 't':
            list_ft(temp, n);
            break;

        default:
           average(temp, n);
            break;
    }

}