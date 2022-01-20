/*
CH-230-A
a3_p7.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<stdio.h>
void print_form(int n, int m, char c) {
	int i,j;      
	for(i=1;i<=n;i++) {
	for(j=1;j<=i+m-1;j++) {
	printf("%c",c);
	}
	printf("\n");
}
}
int main() {
	int n,m;
	char c;
	scanf("%d%d",&n,&m);
	scanf(" %c",&c);
	print_form(n,  m,  c); 

}