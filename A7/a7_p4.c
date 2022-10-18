/*
CH-230-A
a7_p4.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//printing to uppercase
void upper_case(char string[100]){
    for (int i = 0; i < strlen(string); i++){
        if (string[i] >= 97 && string[i] <= 122){
            printf("%c",toupper(string[i]));
        }
        else{
            printf("%c",string[i]);
        }
        
    }
    
}
//printing to lowercase
void lower_case(char string[100]){
    for (int i=0; i < strlen(string); i++){
        if (string[i] >= 65 && string[i] <= 90){
            printf("%c",tolower(string[i]));
        }
        else{
            printf("%c",string[i]);
        }
        
    }
    
}
//print to upper of it is in lowercase and vice versa
void ul_lucase(char string[100]){
    for (int i=0; i < strlen(string); i++){
        if (string[i] >= 65 && string[i] <= 90){
            printf("%c", tolower(string[i]));
        }
        else if(string[i] >= 97 && string[i] <= 122){
            printf("%c", toupper(string[i]));
        }
        else{
            printf("%c", string[i]);
        }
    }  
}
// quit the execution
void quit(char * string){
    exit(1);
}

int main(){   
    char string[100];
    int n = 0;
    void (*func_ptr[4])(char*);
    fgets(string, sizeof(string), stdin);
    //function pointer to print into uppercase
    func_ptr[0] = upper_case;
    //function pointer to print into lowercase
    func_ptr[1] = lower_case;
    //function pointer to print in upper if its is in lower and vice versa
    func_ptr[2] = ul_lucase;
    //function pointer to quit the execution
    func_ptr[3] = quit;
    while (1){
        scanf("%d", &n);
        (func_ptr[n - 1])(string);
    } 
    
    
    return 0;
}