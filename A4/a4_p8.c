/*
CH-230-A
a4_p8.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<stdio.h>
int main() {
	int a[30][30],n;
	scanf("%d",&n);
	
	for(int i = 0 ; i<n ; i++) {       //inputs rows of matrix
		for(int j = 0 ; j<n ; j++) {   //inputs column of matrix	
			scanf("%d",&a[i][j]);
		}
	}
	//using loop to print the elements of matrix
    printf("The entered matrix is:\n");
	for(int i = 0 ; i<n ; i++) {			
		for(int j = 0 ; j<n ; j++) {
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	//logic to print elements under the secondary diagonal of matrix
	printf("Under the secondary diagonal:\n");
		for(int i = 0 ; i<n ; i++) {
            int j=n-i;
			for(;j<n ; j++) {
			 {
					printf("%d ", a[i][j]);
				}
	
}
}printf("\n"); 

}