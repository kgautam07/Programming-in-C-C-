/*
CH-230-A
a5_p7.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char first_string[100], second_string[100];
        
        scanf("%[^\n]%*c", first_string); /*scanning input string*/
        scanf("%[^\n]%*c", second_string);
          char concat[200]; /*concatinating both strings*/
            concat[0] = '\0';
            strcat(concat, first_string);
            strcat(concat, second_string);
              int i;
              for(i = 0; concat[i] != '\0'; i++){/*size of concat is i*/
              }

        char *array;
	      array = (char*)malloc(sizeof(char) * i);/*allocating memory*/
          array[0] = '\0';
		  if (array == NULL){
	   exit(0); /*empty string stops the execution*/
           }
           
              printf("Result of concatenation: ");
               strcat(array, concat);
               for(int x = 0; x < i; x++){ /*loop to print every element of concat*/
            	printf("%c", *(array+x));       
               }
	 			printf("\n");
           
            free(array); /*free memory*/
        
   return 0;
}



