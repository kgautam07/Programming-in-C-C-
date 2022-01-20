/*
CH-230-A
a5_p2.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
/*function declaration*/
void divby5(float arr[], int size){
	for(int i = 0; i < size; i++){
		arr[i] = arr[i]/5; /*division of elements of array by 5*/
	}							
}
int main(){
	float arr[]={5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
	printf("Before:\n");
	for (int i = 0; i < 6; i++){ /*printing elements before division*/
		printf("%.3f ",arr[i]);       
	}
	divby5(arr,6);
	printf("\nAfter:\n");
	for (int i = 0; i < 6; i++){ /*printing elements after division*/
		printf("%.3f ",arr[i]);  
	}
	printf("\n");
	return 0;
		
}