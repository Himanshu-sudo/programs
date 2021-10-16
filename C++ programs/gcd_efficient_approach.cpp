#include<bits/stdc++.h>
using namespace std ; 
// This is an Eucledian approach
int gcd(int a , int b){
    if (b == 0){
        return a ; 
    }
    return gcd(b , a%b) ; 
}
int main(){
    // int a = 18, b = 20;
    // cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b)<<"\n";
    // cout<<"Using inbuilt cpp function "<<__gcd(a , b)<<"\n" ; 
    // gcd of an array
    int arr[5] ; 

    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i] ; 
    }
    int gc = 0 ; 
    for(int i = 0 ; i < 5 ; i++){
        gc = gcd(gc , arr[i]) ; 
    }
    cout<<"The gcd of array is "<<gc<<"\n" ; 
    
    return 0 ; 
}