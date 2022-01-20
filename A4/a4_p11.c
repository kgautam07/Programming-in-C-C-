/*
CH-230-A
a4_p11.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int count_insensitive(char *str, char c){
	int count=0;
	while(*str != '\0'){
	/*checks the given character*/
	if(*str == c){
		count ++;
	}
	str++;  /*goes to the next string*/
	}
		return count;
}
int main(){
	char c;
	
	char* arr;
     /* Dynamically allocates memory using malloc()*/
    arr = (char*)malloc(50 * sizeof(char));
 
   /*checks the memory*/
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        printf("Memory successfully allocated using malloc.\n");
       fgets(arr,50,stdin);
}

	char* str;
	str= (char*)malloc(strlen(arr)+1 * sizeof(char));
	if (str == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }else{
    	printf("Memory successfully allocated using malloc.\n");
    	strcpy(str,arr);
    	/*makes the string to lowercase*/
    	*str=tolower(*str);
    	free(arr);
    	printf("Enter a character to search:");
    	scanf(" %c", &c);
		count_insensitive(str,c);
    	printf("The character '%c' occurs %d times.\n", c, count_insensitive(str,c));
    	free(str);
	}

return 0;
	

}





