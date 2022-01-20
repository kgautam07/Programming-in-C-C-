/*
CH-230-A
a8_p5.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
char p, q;
FILE *ptr_read; //pointer for reading from file
FILE *ptr_write;//pointer for writing in the file

ptr_read = fopen("chars.txt", "r");
ptr_write = fopen("codesum.txt", "w");
if (ptr_read == NULL || ptr_write == NULL){
    printf("Error opening file!\n");
    exit(1);
}
    p = getc(ptr_read);
    q = getc(ptr_read);
//adding the first two character of the chars.txt file and printing
fprintf(ptr_write, "%d", p+q);
fclose(ptr_read);
fclose(ptr_write);

return 0;
}