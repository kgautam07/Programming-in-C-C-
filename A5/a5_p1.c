/*
CH-230-A
a5_p1.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<stdio.h>
/*function declaration*/
void triangle(int n,char ch){
	int i, j;
	/*scanning input*/
	scanf(" %d", &n);
    scanf(" %c", &ch);
	for(i = n; i >= 1; i--) {   /*loop for row and column*/
    	for(j = 1; j <= i; j++) {
         printf("%c", ch);
    	}
    printf("\n"); /*changes row and column*/
	}	
}

int main(){
    int n = 0;
    char ch = 0;
   	triangle(n, ch);
	 return 0;
} 














