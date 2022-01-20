/*
CH-230-A
a4_p4.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int count_consonants(char str[]) {
	int count = 0;
	int i;
	int count1=0;
	for(i=0;str[i]!='\0';i++) {
		//checking  vowels
		if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u' ) {
			count++;
		}
		//checking numbers and symbols 
		if((int)str[i]>=97 && (int)str[i]<=122 ) {
			count1++;
		}
	}
	return count1-count;
}
int main() {
	char str[100];
	int i;
	while(1) { 
    fgets(str, sizeof(str), stdin);
	if(str[0] == '\n') {
		break;
	}

	//changing the string to lowercase
for(i=0; str[i]!='\0'; i++) {
	str[i] = tolower(str[i]);
   }
	printf("Number of consonants=%d\n",count_consonants(str)) ;
}
return 0;
}