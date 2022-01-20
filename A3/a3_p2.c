/*
CH-230-A
a3_p2.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
#include <stdbool.h>
int main() {
    char ch;
    int n;
    printf("Enter a lowercase character:");
    scanf("%c",&ch);
    printf("Enter an integer:");
    scanf("%d",&n);

    for (int i = 0; i <= n; i++){ 
    printf("%c,",ch-i); /*printing the required output of characters*/
  }

    return 0;
} 