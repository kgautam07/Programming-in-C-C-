/*
CH-230-A
a3_p11.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
int main(){
	char one[50],two[100],third[100];
	int i,length1,length2;
	char c;
    	scanf("%[^\n]%*c", one);
		scanf("%[^\n]%*c", two);
		scanf(" %c", &c);
			
		length1=strlen(one); //for length
		length2=strlen(two);
			
		printf("length1=%d\n",length1);
		printf("length2=%d\n",length2);
			
			char concat[150]; //concatinating two strings
			concat[0] = '\0';
			strcat(concat,one);
			strcat(concat,two);
			printf("concatenation=%s\n", concat);
				
			strcpy(third,two); //copying two to third
			printf("copy=%s\n",two);
			int compare = strcmp(one, two);
    		if (compare<0){
       		 printf("one is smaller than two\n");
    		}
    		else {
			if(compare>0){
            	printf("one is larger than two\n");
       		 }
        	else{
        	    printf("one is equal to two\n");
       		 }
       		}
			for (i = 0; two[i] != c && two[i] != '\0'; ++i){		
				}
			if(two[i]==c){
				
				printf("position=%d\n",i);
			}
			else{
				printf("The character is not in the string\n");
			}
   return 0;
}










