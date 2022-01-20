/*
CH-230-A
a5_p7.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()  { 
int **MTX_A; 
int **MTX_B;
int **MTX_C; 
int n, m, p, i, j, k;   
//scanning for dimension
 scanf(" %d %d %d", &n, &m, &p);  
 MTX_A = (int**)malloc(sizeof(int*)*n);  
 MTX_B = (int**)malloc(sizeof(int*)*m); 
 MTX_C = (int**)malloc(sizeof(int*)*n); 
for(i=0; i<n; i++) {
  MTX_A[i] = (int*)malloc(sizeof(int)*m); 
}
for(i=0; i<m; i++) {
 	MTX_B[i] = (int*)malloc(sizeof(int)*p); 
}
for(i=0; i<n; i++){ 
  MTX_C[i] = (int*)malloc(sizeof(int)*p); 
}
for(i=0; i< n; i++) /* getting matrix A*/
{ 
	for(j=0; j< m; j++) { 
		scanf("%d", &MTX_A[i][j]); 
	} 
} 
for(i=0; i< m; i++) { /* getting matrix B*/
	for(j=0; j< p; j++) { 
		scanf("%d", &MTX_B[i][j]); 
	} 
} 
/*Multiplication*/ 
for(i=0; i < n; i++) { 
	for(j=0; j < m; j++) { 
		MTX_C[i][j] = 0; 
 		for(k=0; k<p; k++)  
		MTX_C[i][j] = MTX_C[i][j] + MTX_A[i][k] * MTX_B[k][j]; 
	} 
}

printf("Matrix A:");
for(i=0; i< n; i++){ 
    printf("\n");
	for(j=0; j < m; j++) 	{ 
	printf("%d ", MTX_A[i][j]); 
	}
}
printf("\nMatrix B:");
for(i=0; i< m; i++){
     printf("\n");
 
	for(j=0; j < p; j++) {	 
	printf("%d ", MTX_B[i][j]);
	}
}
printf("\nThe multiplication result AxB:"); //result of multiplication 
for(i=0; i< n; i++){
     printf("\n");
	for(j=0; j < p; j++) 	 
	printf("%d ", MTX_C[i][j]); 
} 
free(MTX_A); /* free memory*/
free(MTX_B);
free(MTX_C);
return 0; 


}
























