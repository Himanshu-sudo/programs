#include<bits/stdc++.h>
using namespace std ;
// O(n^2) Time complexity
int* selection_sort(int a[] , int N){
    int i , j , minindex ; 
    for(i = 0 ; i < N ; i++){
        minindex = i ; 
        for(j = i + 1 ; j < N ; j++){
            if (a[j] < a[minindex]){
                minindex = j ; 
            }
            
        }
        swap(a[i] , a[minindex]) ; 
    }
    // for (i = 0 ; i < N ; i++){
    //     cout<<"Printing"<<a[i]<<" " ; 
    // }
     return a ; 
}

int main(){
    int N , i ;
     cin>>N ;
    int arr[N] ; 
    srand(100) ; 
    for( i = 0 ; i<N ; i++){
        arr[i] = rand() % 100 ; 
    }
    cout<<"Before selection sort"<<"\n" ; 
    for ( i = 0 ; i < N ; i++){
        cout<<arr[i]<<" " ; 
    }
    int* p ; 
    auto start = chrono::steady_clock::now() ;
    p = selection_sort(arr , N) ;
    auto end = chrono::steady_clock::now() ;
    double elapsed_time_ns = double(chrono::duration_cast<chrono::nanoseconds>(end - start).count()) ; 
    cout<<"Elapsed time(s):"<<elapsed_time_ns/1e9<<"\n" ; 
    cout<<"\n" ;   
    cout<<"After selection sort"<<"\n" ; 
    for ( i = 0 ; i < N ; i++){
        cout<<p[i]<<" " ; 
    }

    return 0 ; 
}

