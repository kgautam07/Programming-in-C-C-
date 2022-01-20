/*
CH-230-A
a4_p6.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void greatest(int *ptr,int n){
	int i;
	int greater = 0;
	int lessgreater = 0;
	
		/*checking the greatest*/
		for (i = 0; i < n; ++i) {
			if(ptr[i] > greater){
				greater = ptr[i];
			}else{
				greater = greater;
			}
		
		}
		/*checking the second greatest*/
		for (i = 0; i < n; ++i) {
			if(ptr[i] > lessgreater && ptr[i] != greater){
				lessgreater = ptr[i];
			}else{
				lessgreater = lessgreater;
			}
		}
			printf("The two greatest elements are %d and %d",greater, lessgreater);
}
void getarray(int *ptr, int n){
	int i;
	
		/*get the elements of the array*/
		for (i = 0; i < n; ++i) {
			scanf("%d", &ptr[i]);
		}
}

int main(){
	int* ptr;
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	/*dynamically allocate memory using malloc()*/
	ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {
		printf("Memory successfully allocated using malloc.\n");
		getarray(ptr,n);
		greatest(ptr,n);
		
	}
	free(ptr);
	return 0;
}