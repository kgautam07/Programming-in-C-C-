/*
CH-230-A
a4_p12.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void replaceAll(char *str, char c, char e){ 
	while (*str != '\0'){
		if (*str == c){
			*str = e;
		}
		str++;
	}
}
int main(){
	char *input, c, e;
	int i, k;
	
	input = (char*)malloc(sizeof(char) * 80); //allocation of memory
	while (1){
		printf("Enter a string:");
		fgets(input, 80, stdin);
		k = strlen(input);
		for (i = 0; i < k; i++){
			if (input[i] == '\n'){
				input[i] = '\0';
			}
		}
		if (strcmp(input, "stop") == 0){ /*breaks the program if stop is entered*/
			break;
		}
		else{
			printf("Enter a character that you want to replace:");
			c = getchar();
			getchar();
			printf("Enter the character that replaces the above character:");
			e = getchar();
			printf("\nThe entered  string is: %s\n", input);
			printf("The character that you want to replace is: %c\n", c);
			printf("The character that replaces the above character is: %c\n", e);
			replaceAll(input, c, e);
			printf("\nThe string after replacement is: %s\n", input);
			printf("The character that you wanted to replace was: %c\n", c);
			printf("The character that replaced the above character is: %c\n", e);
			getchar();
		}
	}
		free(input);  //to free the allocated memory

	return 0;
}

