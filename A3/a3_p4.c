/*
CH-230-A
a3_p4.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
int position(char str[], char c)
{
	int idx;
	/*Loop until end of string*/;
	for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){
	/*do nothing*/
	} // braces added to put return idx outside the loop
	if(str[idx]==c){  //condition applied	
	return idx;
	}
	else {
	return -1; //-1 to show g is not present 
	}
}

int main() {
	char line[80];
	while (1) {
	printf("Enter string:\n");
	fgets(line, sizeof(line), stdin);
	printf("The first occurrence of 'g' is: %d\n", position(line,'g'));
}
}



















