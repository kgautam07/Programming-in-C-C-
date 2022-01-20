#include<stdio.h>
int main() {
	char c;
	scanf(" %c",&c);
	int n;
	scanf(" %d",&n);
	double temp[100],average=0.0,sum=0.0;
	int i;
	for(i=0;i<n;i++) {
		scanf(" %lf",&temp[i]);
	}
	
	switch(c) {
	case 's':
		for(i=0;i<n;i++) {
			sum=sum+temp[i];
	}
	printf("The sum of temperatures: %lf\n",sum);
	break;
	
	case 'p':
		for(i=0;i<n;i++) {
			printf("The list of all temperatures: %lf\n",temp[i]);
		}
			break;
	
	case 't':
		for(i=0;i<n;i++) {
		temp[i] = (float)9/5*temp[i] + 32.0;
		printf("The list of all temperatures in Fahrenheit: %lf\n",temp[i]);		
		}
	break;
	default:
		for(i=0;i<n;i++) {
			sum+=temp[i];
		}
		average=sum/n;
		printf("Average of all temperatures: %lf\n",average);	
		break;	
						
}
}