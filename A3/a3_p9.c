/*
CH-230-A
a3_p9.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<stdio.h>
double sum25(double v[], int n){
if(n>=6){
	double sum=0;
	sum=sum + v[2]+ v[5];
	printf("sum=%lf\n", sum);
	return 0;
}
else{
	printf("One or both positions are invalid\n");
	return -111;
	}
}
int main(){
	double a[20]; //list of arrays
	int n;
	scanf(" %d", &n);
	int i;
	for(i=0;i<n;i++){
	scanf(" %lf", &a[i]);
	}
	sum25(a,n);
	return 0;
}