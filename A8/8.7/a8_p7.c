/*
CH-230-A
a8_p7.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  //pointer to access first file
    FILE *rptr1 = fopen("text1.txt","r");
     if( rptr1 == NULL){
    printf("Cannot open file!\n");
    exit(1);
 }
 //pointer to access second file
 FILE *rptr2 = fopen("text2.txt","r");
     if( rptr2 == NULL){
    printf("Cannot open file!\n");
    exit(1);
 }
 //pointer to access the third file where result should be displayed
 FILE *wptr = fopen("merge12.txt","w");
     if( wptr == NULL){
    printf("Some error occured!\n");
    exit(1);
     }
     char ch;
     //copying contents of first file to the third output file
     while(1){
        ch = fgetc(rptr1);
        if (ch == EOF)
         break;
      fputc(ch, wptr);
      } 
      fclose(rptr1);
        
        //copying contents of second file to the third output file
        while(1){
        ch = fgetc(rptr2);
        if (ch == EOF)
         break;
      fputc(ch, wptr);
      }
      
      fclose(rptr2);
      fclose(wptr);
        return 0;
     }











