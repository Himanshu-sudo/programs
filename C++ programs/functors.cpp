#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    /* Function object : Function wrapped in a class so that it can be available 
    like an object*/
    int arr[] = {1,73,4,2,54,7} ; 
    sort(arr , arr + 5 , greater<int>()) ; // greater<int>() is a functor
    /*We can create our own comparator functions and put in sort*/
    for (int i = 0; i < 6; i++)
    {
       cout<<arr[i]<<" "; 
    }
     
    return 0 ; 
}