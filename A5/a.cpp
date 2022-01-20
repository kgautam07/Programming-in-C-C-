/*
CH-230-A
a6_p6.c
Krishna Gautam
kgautam@jacobs-university.de
*/

/*function declaration*/
unsigned char set3bits(unsigned char Ch, int a, int b, int c){
    int j = 1 << a; //using bitwise operators to set the bits of given input
    j = j|(1 << b);
    j = j|(1 << c);
    Ch |= j;
    return Ch;

}

#include <stdio.h>
int main(){
    unsigned char Ch; 
    int a, b, c;
    scanf("%c",&Ch);
    scanf("%d%d%d",&a,&b,&c);

    printf("The decimal representation is: %d\n",Ch);
    printf("The binary representation is: ");

for (int i = sizeof(char)*8-1; i >= 0; i--) {
     if(Ch & (1<<i)){ //mask used to shift left by 1
       printf("%d",1);
     }
     else
     printf("%d",0);
  }
  printf("\n");
  printf("After setting the bits: ");
  Ch = set3bits(Ch, a, b, c);
  for (int i = sizeof(char)*8-1; i >= 0; i--) {
     if(Ch & (1<<i)){ //mask used to shift left by 1
       printf("%d",1);
     }
     else
     printf("%d",0);
  }
  printf("\n");


return 0;

    
}
