#include<bits/stdc++.h>

using namespace std ; 
const int N = 300000 ; 
int arr[N];

void heapify(int n , int parent){
    int largest = parent ; 
    int left = 2 * parent + 1 ; 
    int right = 2 * parent + 2 ; 
    if(left < n && arr[left] > arr[largest]){
        largest = left ; 
    }
    if(right < n && arr[right] > arr[largest]){
        largest = right ; 
    }
    if(largest != parent){
       swap(arr[parent] , arr[largest]) ; 
        heapify( n , largest) ; 
    }
}

void heapsort(int num){
    int i ; 
    i = (num / 2) - 1 ; 
    for( i ; i >= 0 ; i--){
        heapify(num , i) ; 
    }
    for(i = num - 1 ; i >= 0 ; i--){
        swap(arr[0] , arr[i]) ; 
        heapify(i , 0) ; 
    }

}

int main(){
    int no ; 
    cin>>no ;
    srand(100) ;  
    for(int i = 0 ; i < no ; i++){
        arr[i] = rand() % 100  ; 
    }
    // cout<<"Before sorting\n" ; 
    // for(int i = 0 ; i < no ; i++){
    //     cout<<arr[i]<<" " ; 
    // }
    auto start = chrono::steady_clock::now() ;
    heapsort(no) ;
    auto end = chrono::steady_clock::now() ;

    // cout<<"\nAfter sorting\n" ; 
    // for(int i = 0 ; i < no ; i++){
    //     cout<<arr[i]<<" " ; 
    // }
    double elapsed_time_ns = double(chrono::duration_cast<chrono::nanoseconds>(end - start).count()) ; 
    cout<<"\nElapsed time(s):"<<elapsed_time_ns/1e9<<"\n" ; 

    return 0 ; 
}