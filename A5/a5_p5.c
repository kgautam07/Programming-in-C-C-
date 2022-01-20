/*
CH-230-A
a5_p5.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*function declaration for scalar product*/
double scalar_product(double *v, double *w, int n){
	double scalar_product = 0;
	for (int k = 0; k < n; k++){
		scalar_product = scalar_product + v[k] * w[k];
	}
	return scalar_product;
}
/*function declaration for comparison*/
void position(double *v, double *w, int n){
	int p_sv = 0, p_lv = 0, p_sw = 0, p_lw = 0;
	double small_v = v[0];
	double large_v = v[0];
	double small_w = w[0];
	double large_w = w[0];
	int k;
	for( k = 0; k < n; k++){ 
		if(v[k] < small_v){  /*finding smallest and its position in v*/
			small_v = v[k];
			p_sv = k;
		}
		else if( v[k] > large_v){/*finding largest and its position in v*/
			large_v = v[k];
			p_lv = k;
		}
		if( w[k] < small_w){/*finding smallest and its position in w*/
			small_w = w[k];
			p_sw = k;
		}
		else if( w[k] > large_w){/*finding largest and its position in w*/
			large_w = w[k];
			p_lw = k;
		}
	}
	printf("The smallest = %lf\n", small_v);
	printf("Position of smallest = %d\n", p_sv);
	printf("The largest = %lf\n", large_v);
	printf("Position of largest = %d\n", p_lv);
	printf("The smallest = %lf\n", small_w);
	printf("Position of smallest = %d\n", p_sw);
	printf("The largest = %lf\n", large_w);
	printf("Position of largest = %d\n", p_lw);
	
}

int main(){
	int n;
	double *v, *w;
	scanf("%d",&n);
	getchar();
    /*Dynamically allocating memory for v*/
	v = (double*)malloc(sizeof(double)*n);
	if(v == NULL){  /*empty string stops the execution*/
		exit(0);
	}
    /*Dynamically allocating memory for w*/
	w = (double*)malloc(sizeof(double)*n);
	if (w == NULL){
		exit(0);
	}
	int i;
	for(i = 0; i < n; i++){
		scanf("%lf", &v[i]); /*scanning elements of v*/
	}
	int j;
	for (j = 0; j < n; j++){
		scanf("%lf", &w[j]);/*scanning elements of w*/
	}
	printf("Scalar product=%lf\n",scalar_product(v,w,n));
    scalar_product(v, w, n);
	position(v, w, n);
	free(v); /*Deallocating memory*/
	free(w);
	
	return 0;
	
	
	
}