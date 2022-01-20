/*
CH-230-A
a5_p11.c
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <stdio.h>
/*function declaration*/
int is_prime(int x, int i ){ 
    if(i == 1){
         return 1;
    }
    else {
       if(x % i == 0){
       return 0;
       }
       else{
       return is_prime(x, i-1);
       }
    
    }
    
   
}

int main(){
int x, prime;
scanf("%d", &x); /*scanning input*/
if(x == 0 || x == 1) /*condition for 1 and 0*/
printf("%d is not prime\n", x);
else{
prime = is_prime(x, x/2); /*function call*/
if(prime == 1)
printf("%d is prime\n", x);
else {
printf("%d is not prime\n", x);
}
}

return 0;


}