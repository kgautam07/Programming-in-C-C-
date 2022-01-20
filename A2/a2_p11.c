#include<stdio.h>
int main(void) {
	int n;
while(true) {
		scanf("%d",&n);
		if(n>0) {
			break;
		}
}

int i=1;
while(i<=n) {
	printf("%d day = %d hours\n",i,i*24);
	i++;
}
}