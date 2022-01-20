/*
CH-230-A
a4_p5.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int count_consonants(char str[]){
    char *ptr = str;
    int i=0, count_consonants=0, Vowel=0, total=0;
    for(i=0; i<strlen(str); i++){
    	
   /*Checks for char in the string by pointing (ptr+i) in the string array*/
        if ((*(ptr+i)>='a'&&*(ptr+i)<='z')){
            /*checks if they are vowels*/
            if(*(ptr+i)=='a'||*(ptr+i)=='e'||*(ptr+i)=='i'||
            *(ptr+i)=='o'||*(ptr+i)=='u')
            {
                Vowel = Vowel + 1;
                total = total + 1;
            }
            else{
                total = total + 1;
            }
        }
    }    
    count_consonants = total - Vowel;
    return count_consonants;
}

    int main() {
	char str[100];
	int i;
	while(1) { 
	/*input of strings*/
	fgets(str,sizeof(str),stdin);
	if(str[0]=='\n') {
		break;
	}
	
for(i=0;str[i]!='\n';i++) {
	str[i]=tolower(str[i]); /*changes to lowercase*/
   }
	printf("Number of consonants=%d\n",count_consonants(str)) ;
}
return 0;
}