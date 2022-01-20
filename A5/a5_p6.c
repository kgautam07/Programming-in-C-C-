/*
CH-230-A
a5_p6.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int length;
	scanf("%d", &length);
	float *arr;
	/*Dynamically allocating space for array*/
	arr = (float*)malloc(sizeof(float) * length);
	if (arr == NULL){   /*empty string stops the execution*/
	   exit(0);
}
   
	for(int i = 0; i < length; i++){
	scanf("%f", &arr[i]); /*scanning elements of array*/
}

	int count;
	for (count=0; count<length; count++){
		if (arr[count]<0){
			break;
			}
		
		}
	printf("Before the first negative value: %d elements\n", count);
	free(arr); /*free memory*/
	
		return 0;
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
