# include<bits/stdc++.h>
using namespace std ;
int addition(int a , int b){
    int c = a + b ; 
    return c ; 
}
int main(){
    int a , b , c ; 
    cout<<"Enter two numbers for addition\n" ; 
    cin>>a>>b ; 
    c = addition(a , b) ; 
    cout<<"The addition of "<<a<<" and "<<b<<" is "<<c ; 

    return 0 ;
}