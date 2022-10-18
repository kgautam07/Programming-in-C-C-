/*
CH-230-A
a7_p5.c
Krishna Gautam
kgautam@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//function for ascending order
int ascending(const void *va, const void *vb){
	const int* a = (const int*) va;
	const int* b = (const int*) vb;
		if (*a < *b) return -1;
		else if(*a > *b) return 1;
		else return 0;
}
//function for descending order
int descending(const void *va, const void *vb){
	const int* a = (const int*) va;
	const int* b = (const int*) vb;
		if (*a < *b) return 1;
		else if(*a > *b) return -1;
		else return 0;
	}

int main(){
	int n;
	int* array;
	char Ch;
	
	scanf("%d",&n);
	//dynamically allocating memory
	array = (int*)malloc(sizeof(int)*n);
	if(array == NULL){ //empty string stops execution
		exit(1);
	}
    //scanning elements of array
	for (int i = 0; i < n; i++){
		scanf("%d",&array[i]);
	}
	
	while(1){
		scanf("%c", &Ch);
		
	switch(Ch){
		case'a':
        //using quicksort for printing elements in ascending order
			qsort(array, n, sizeof(array[0]), ascending);
			for (int i = 0; i < n; i++){
				printf("%d ",array[i]);
			}
				printf("\n");
				break;
			//using quicksort for printing elements in descending order
			case 'd':
			qsort(array, n, sizeof(array[0]),descending);
			for( int i = 0; i < n; i++){
				printf("%d ",array[i]);
			}
				printf("\n");
				break;
			case 'e':
				exit(0);
				break;
		// if character 'e' entered, it exits the execution
        default:
        	
            break;
	
	}

}
free(array); //free memory
	
	
}