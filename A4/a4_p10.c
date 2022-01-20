/*
CH-230-A
a4_p10.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<stdio.h>
#include<math.h>

void proddicpowinv(float a,float b,float *prod,
float *div,float *pwr,float *invb){
	float multiply=a*b;
	prod= &multiply;
	float division=a/b;
	div= &division;
	float power=pow(a,b);
	pwr= &power;
	float inverse=(1/b);
	invb= &inverse;
	printf("The product is: %f\n", *prod);
	printf("The division is: %f\n", *div);
	printf("The power is: %f\n", *pwr);
	printf("The inverse is: %f\n", *invb);
	
}
int main(){
	float a,b;
	float *prod=0; /*declaring pointers*/
	float *div=0;
	float *pwr=0;
	float *invb=0;
	
	scanf(" %f %f", &a, &b);

	proddicpowinv(a,b,prod,div,pwr,invb);
	/*simple test program*/
	printf("Test Statistics: \n");
	printf("Multiplication: %f\n",a*b);
	printf("Division: %f\n",a/b);
	printf("Power: %f\n",pow(a,b));
	printf("Inverse: %f\n",1/b);
	return 0;
}












