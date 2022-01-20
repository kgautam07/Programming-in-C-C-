/*
CH-230-A
a9_p8.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include <iostream>
using namespace std;
//function for determining maximun and finding the difference
void subtract_max(int *a, int n){
    int test;
    for(int i = 0; i < n; i++){
        if(test < a[i]){
            test = a[i];
            
        }
    }
    cout << "The maximum value in the array is:"<< test << endl;
   for(int i = 0; i < n; i++){
   a[i] = a[i] - test;
   }
}
//function for deallocating memory
void deallocate(int *a){
    delete []a;
}

int main(){
    int n;
    cout<<"Enter the number of elements of array:" << endl;
    cin >> n;
    int *a;
    cout<<"Enter the elements of array:" << endl;
    a = new int[n];
    if(a == nullptr){ //error in allocating memory
        exit(1);
    }
    for (int i = 0; i < n; i++){ //getting all elements of array
        cin >> a[i];
    }
    subtract_max(a, n);
    cout << "The values of the array after subtraction are: ";
    cout << "(";
    for (int i = 0; i < n; i++){
        cout << a[i] <<", ";
    }
    cout << ")";

    deallocate(a); //free memory
    return 0;

}