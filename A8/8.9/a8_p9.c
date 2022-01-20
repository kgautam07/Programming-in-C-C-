/*
CH-230-A
a8_p9.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char file[n][100];
    char buffer[64];
    //scanning the files
    for (int i = 0; i < n; i++){  
        scanf("%s", file[i]); 
    } 
    FILE *rptr;//pointer to access the files
    FILE *wptr;//pointer to access the output file
    //the pointer opens the output file
    wptr = fopen("output.txt","w");
    if (wptr == NULL)  {
        printf("Error opening file!\n");
        exit(1);
    } 
    char next[] ="\n"; 
    printf("Concating the content of %d files ...\n",n);
    printf("The result is:\n");

    for (int i = 0; i < n; i++){
        //pointer opens the files
        rptr = fopen(file[i],"r");
        if(rptr == NULL){
            printf("Error opening file!\n");
            exit(1);
         }
         //pointer search the elements of file from the end
        fseek(rptr, 0, SEEK_END);
        
        int size = ftell(rptr);//it tells the size of file
       //pointer search the elements of file from the end
        fseek(rptr, 0, SEEK_SET);
        //this reads in binary
        fread(buffer,sizeof(char),size,rptr);
        buffer[size]='\0';
        
        printf("%s\n",buffer);
        //writes in the output file
        fwrite(buffer, sizeof(char), size, wptr);
        fclose(rptr);// closing file
        fwrite(next, sizeof(char), 1, wptr);
    }
    printf("The result was written into output.txt\n");
    
    
    fclose(wptr);//closing output file
    
    return 0;


}
