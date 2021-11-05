#include<iostream>
#include<time.h>
using namespace std ; 

int main(){
    srand(time(0)) ; 
    int a = rand() ; 
    cout<<"The value "<<a<<endl ; 
    return 0 ; 
}