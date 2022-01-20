/*
CH-230-A
a5_p4.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void divby5(float arr[], int n){
	for(int i = 0; i < n; i++){
		arr[i] = arr[i]/5; 
	}							 
}

int main(){
    int n;
	float *arr;
    scanf("%d", &n);
	
   arr = (float*)malloc(sizeof(float) * n);
   if (arr == NULL){
	   printf("Memory not allocated");
	   exit(0);

   }
   else{
	   printf("Memory successfully allocated using malloc\n");
   }

printf("Enter the elements of array:\n");
for(int i = 0; i < n; i++){
	scanf("%f", &arr[i]);
}
	
	divby5(arr,n);
	printf("\nResult:\n");
	for (int i = 0; i < n; i++){ /*printing elements after division*/
		printf("%.3f ", arr[i]);  
	}
	printf("\n");
	free(arr); /*free the allocated memory*/
	return 0;
		
}