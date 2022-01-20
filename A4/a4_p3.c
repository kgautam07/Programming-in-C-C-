/*
CH-230-A
a4_p3.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<stdio.h>
#include<math.h>
/*declaration of function for geometric mean*/
float geometric_mean(float array[],int n){
	float product = 1.0;
	int i = 0;
	for(i = 0; i < n; i++){
		product = product * array[i];
	
	}
	return pow(product, 1.0/n);
}

/*declaration of function for highest number*/
float highest(float array[], int n){
	float high = array[0];
	int i;
	for(i = 0; i < n; i++){
		if(array[i] > high){
			high = array[i];
		}else{
			high = high;
		}
	}
	return high;
}
/*declaration of function for smallest number*/
float smallest(float array[], int n){
	float small = array[0];
	int i;
	for(i = 0; i < n; i++){
		if(array[i] < small){
			small = array[i];
		}else{
			small = small;
		}
	}
	return small;
}
/*declaration of function for summing*/
float for_sum(float array[], int n){
	float sum = 0.0;
	for(int i = 0; i < n; i++){
		sum = sum + array[i];
	}
	return sum;
}
int main(){
	float digits[15];
	int i = 0;
	int br = 0;
	char c;
		while(i < 15 && br == 0){
		scanf(" %f", &digits[i]);
		if(digits[i] < 0.0) {
			digits[i] = 0.0; 
            br = 1;
			break;
			}	
			i++;
		}

		printf("Enter a character:");
		scanf(" %c", &c);
		
	     /*switch condition*/
		switch(c){
		case 'm':{
			printf("Geometric mean is: %f\n",geometric_mean(digits, i));
			break;
		}
		case 'h':{
			printf("Highest number of the array: %f\n", highest(digits, i) );
			break;
		}
		case 'l':{
			printf("Smallest number of the array: %f\n", smallest(digits, i));
			break;
		}
		case 's':{
			printf("Sum of all the elements in the array: %f\n", for_sum(digits, i));
			break;
		}
	}
	return 0;
	}