/*
CH-230-A
a5_p3.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*function declaration*/
int count_lower(char* str){
	int count = 0;
	for(; *str!='\n'; str++){
		if(*str >= 'a' && *str <= 'z'){ /*checking lowercase characters*/
			count++;
		}
	}
	return count;
	
}

int main(){
	char str[50];
	while(1){
	fgets(str, 50, stdin); /*scanning input*/
	if (str[0] == '\n') /*empty string stops the execution*/
	exit(0);

printf("The number of lowercase characters in the string is:%d\n",count_lower(str));
}
count_lower(str);
return 0;	
	
	
	
}



