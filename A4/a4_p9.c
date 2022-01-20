/*
CH-230-A
a4_p9.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
void getarray(int *arr, int n){
	int i;
	
		/*get the elements of the array*/
		for (i = 0; i < n; ++i) {
			scanf("%d", &arr[i]);
		}
}
int prodminmas(int arr[], int n){
	int i;
	int greater=arr[1];
	int smallest=arr[1];
	int product=1;
	
		//checks the greatest
		for (i = 0; i < n; ++i) {
			if(arr[i]>greater){
				greater=arr[i];
			}else{
				greater=greater;
			}
		} 
		//checking the smallestest
		for (i = 0; i < n; ++i) {
			if(arr[i]<smallest){
				smallest=arr[i];
			}else{
				smallest=smallest;
			}
		} 
	product= product*greater*smallest;	
	return product;
	
}
int main(){
	int* arr;
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	/*dynamically allocate memory using malloc()*/
	arr = (int*)malloc(n * sizeof(int));

	if (arr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {
		printf("Memory successfully allocated using malloc.\n");
		getarray(arr,n);
		printf("The product of greatest and smallestest is %d",prodminmas(arr,n));
}
return 0;
}











