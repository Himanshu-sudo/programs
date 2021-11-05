#include<bits/stdc++.h>
using namespace std ; 
const int N = 300000 ; 
int arr[N];
int partition( int l , int r ){
    int piv = arr[r] ;
    int i = l - 1 ;
    int j = l ; 
    for(j  ; j < r ; j++){
        if(arr[j] < piv){
            i++ ; 
            swap(arr[i] , arr[j]) ; 
        }
    }
    i++ ;
    swap(arr[i] , arr[j]) ;
    return i ; 
}

void quicksort(int left , int right){
    if (left >= right){
        return ; 
    }
    // cout<<"partitiion\n" ; 
    int q = partition(left , right) ;
    
    // cout<<"quicksort1\n" ; 
    quicksort(left , q - 1) ; 
    // cout<<"quicksort2\n" ; 
    quicksort(q+1 , right) ; 
    
}

int main(){
    int n ; 
    cin>>n ; 
    srand(100) ;
    for(int i = 0 ; i < n ; i++){
        arr[i] = rand() % 100 ; 
    }
    // cout<<"Before Sorting\n" ; 
    // for(int j = 0 ; j < n ; j++){
    //     cout<<arr[j]<<" " ; 
    // }
     auto start = chrono::steady_clock::now() ;
     quicksort(0 , n - 1) ; 
    auto end = chrono::steady_clock::now() ;
    
   
    
    //  cout<<"\n" ; 
    // cout<<"After sorting\n" ; 
    // for(int j = 0 ; j < n ; j++){
    //     cout<<arr[j]<<" " ; 
    // }
    double elapsed_time_ns = double(chrono::duration_cast<chrono::nanoseconds>(end - start).count()) ; 
    cout<<"Elapsed time(s):"<<elapsed_time_ns/1e9<<"\n" ; 
     
    return 0 ;

}
