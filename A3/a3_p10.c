/*
CH-230-A
a3_p10.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<stdio.h>
float product(float a, float b){
return a*b;
}
void productbyref(float a, float b, float *p){
	float multiply= a*b;
	p=&multiply;	
	printf("%f\n", *p); 
}
void modifybyref(float *a, float *b){
	*a= *a+3;
	printf("%f\n",*a);
	*b= *b+11;
	printf("%f\n", *b);
}
	
int main(){
	float f1,f2;
	float *ptr=0;
	scanf("%f%f", &f1,&f2);
	printf("%f\n",product(f1, f2));
	productbyref(f1, f2, ptr);
	modifybyref(&f1, &f2);
	return 0;
}
