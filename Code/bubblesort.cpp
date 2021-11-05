#include<bits/stdc++.h>
using namespace std ; 
const int N = 300000 ; 
int arr[N] ;
void bubblesort(int n){
   int i , j  ; 
   for(i = 0 ; i < n ; i++){
       for(j = 0 ; j < n ; j++){
           if(arr[j] > arr[j + 1]){
               swap(arr[j] , arr[j + 1]) ; 
           }
       }
   }
}
int main(){
    int N , i ;
     cin>>N ;
     srand(100) ; 
      for( i = 0 ; i<N ; i++){
        arr[i] = rand() % 100 ; 
    }
    cout<<"Before selection sort"<<"\n" ; 
    for ( i = 0 ; i < N ; i++){
        cout<<arr[i]<<" " ; 
    }
    auto start = chrono::steady_clock::now() ;
    bubblesort(N) ; 
    
    auto end = chrono::steady_clock::now() ;
    cout<<"\n" ; 
    cout<<"After selection sort"<<"\n" ; 
    for ( i = 0 ; i < N ; i++){
        cout<<arr[i]<<" " ; 
    }
    double elapsed_time_ns = double(chrono::duration_cast<chrono::nanoseconds>(end - start).count()) ; 
    cout<<"Elapsed time(s):"<<elapsed_time_ns/1e9<<"\n" ; 
    return 0 ; 
}