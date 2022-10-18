/*
CH-230-A
a7_p6.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
//defining the struct
typedef struct person {
    char name[30];
    int age;
} data;
//function for swap
void swap(data *xp, data *yp) { 
    data temp = *xp; 
    *yp = temp; 
} 

//function to compare age
int num_cmp(void *va, void * vb) {
    data* a = (data*) va; 
    data* b = (data*) vb;
    if (a->age < b->age) return -1; 
    else if (a->age > b->age) return 1; 
    else return 0; 
}
//function to compare name
int str_cmp(void *va, void * vb) {
    data* a = (data*) va; 
    data* b = (data*) vb;
    if (strcmp(a->name,b->name)>0) return 1; 
    else if (strcmp(a->name,b->name)<0) return -1; 
    else return 0; //return 0 if equal
}
// bubble sort function
void bubbleSort(data* value , int n,
    int (*cmp_func)(void*, void*),
    int (*cmp_func2)(void*, void*)) {
    int i, j; 
    int mark; 
    for (i = 0; i < n-1; i++) {
        mark = 0;
        for (j = 0; j < n-i-1; j++) {
            if (cmp_func((value+j), (value+j+1)) > 0 ) {
                 swap(value+j, value+j+1);
                
            }
            else if(cmp_func((value+j), (value+j+1)) == 0){ 
                if (cmp_func2((value+j), (value+j+1)) > 0 ) {
                   
                    swap(value+j, value+j+1);
                    
                }
            }
            mark = 1; 
        }
        
        if (mark == 0) break;
    }
}

int main(){
    int n;
    data* value; 
    scanf("%d", &n);
    getchar();
    value = (data*)malloc(sizeof(data)*n);
    if (value == NULL){ //if empty, stops the execution
        exit(1);
    }
    for (int i = 0; i<n; i++){ 
        fgets((value+i)->name, 30, stdin); 
        if (((value+i)->name)[strlen((value+i)->name)-1] == '\n'){
            ((value+i)->name)[strlen((value+i)->name)-1] = '\0';
        }
        scanf("%d",&(value+i)->age);
        getchar();
    }
    //passing the function pointer
    bubbleSort(value,n,str_cmp, num_cmp); 
    
    for (int i = 0; i<n; i++){
        printf("{%s, %d}; ",(value+i)->name, (value+i)->age);
    }
    printf("\n");
    //pass the function pointer
    bubbleSort(value,n,num_cmp, str_cmp); 
    
    for (int i = 0; i<n; i++){
        
        printf("{%s, %d}; ",(value+i)->name, (value+i)->age);
    }
    printf("\n");
    free(value); //free memory
    return 0;
}








