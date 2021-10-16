#include<iostream>
#include<list>

using namespace std ; 

int main(){
    list<int> l ; //list of 0 length
    // list<int> l1(7) ; //empty list of size 7
    for(int i = 11 ; i < 20 ; i++){
        l.push_back(i) ; 
    }

    list<int> :: iterator iter ; 
    iter = l.begin() ; 

   cout<<l.back()<<'\n' ; 
    // while(iter != l.end()){
    //     cout<<*iter<<" " ; 
    //     iter++ ; 
    // }
    
    
    return 0 ; 
}