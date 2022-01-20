/*
CH-230-A
a8_p8.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char file[100];
char ch;
scanf("%s",file);//scanning file name

FILE *rptr = fopen(file, "r"); //pointer to open the file
if( rptr == NULL){
    printf("Cannot open file!\n");
    exit(1);
}
int count = 0, words = 0;
if(rptr){
    while ((ch=getc(rptr))!=EOF){
        if((ch==' '||ch=='\n'||ch=='\t'||ch=='.'||ch=='?'||ch=='\r'||ch=='!'||ch==',' )){
              count = 0;
            }
            else if (count == 0)
            {
                count = 1;
                words= words + 1;
            }
    } 
}

printf("The file contains %d words.\n",words);
//closing file
fclose(rptr);


return 0;
}