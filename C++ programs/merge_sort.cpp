#include<bits/stdc++.h>
using namespace std ; 
const int N = 300000 ; 
int arr[N] ; 

void merge(int l , int r , int mid ){
    int l_size = mid - l + 1 ; 
    int L[l_size + 1] ; 
    int r_size = r - mid ; 
    int R[r_size + 1] ; 
    for(int i = 0 ; i < l_size ; i++){
        L[i] = arr[i + l] ; 
    }
    for(int i = 0 ; i < r_size ; i++){
        R[i] = arr[i + mid + 1] ; 
    }
    L[l_size] = R[r_size] = INT_MAX ; 
    int l_i = 0 ; 
    int r_i = 0 ; 
    for(int i = l ; i <= r ; i++){
        if(L[l_i] < R[r_i]){
            arr[i] = L[l_i] ; 
            l_i++ ;  
        }
        else{
            arr[i] = R[r_i] ; 
            r_i++ ; 
        }
    }
}

void mergesort(int l , int r){
    if (l == r){
        return ; 
    }
    int mid = (l + r) / 2 ; 
    mergesort(l , mid) ;
    mergesort(mid + 1 , r) ; 
    merge(l , r , mid) ; 
}
int main(){
    int N , i ;
     cin>>N ;
     srand(100) ; 
      for( i = 0 ; i<N ; i++){
        arr[i] = rand() % 100 ; 
    }
    auto start = chrono::steady_clock::now() ;
    mergesort(0 , N-1) ; 
    
    auto end = chrono::steady_clock::now() ;
    double elapsed_time_ns = double(chrono::duration_cast<chrono::nanoseconds>(end - start).count()) ; 
    cout<<"Elapsed time(s):"<<elapsed_time_ns/1e9<<"\n" ; 
    return 0 ; 
}

