#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;
    
    // nothrow used in case memory is not available to prevent exception it gives NULL when used
    // no throw 
    float *p = new (nothrow) float(40.78); //Creating a memory dynamically
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new (nothrow) int[3]; //Creating a contiguious block of memory
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // int *arr = new int[3];
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // delete[] arr;
    // cout << "The value of arr[0] is " << arr[0] << endl;
    // cout << "The value of arr[1] is " << arr[1] << endl;
    // cout << "The value of arr[2] is " << arr[2] << endl;
    delete p ; 
    delete[] arr ; 
    
    return 0;
}
