#include<bits/stdc++.h>
using namespace std ; 

int main(){
    map<int , multiset<string>> stu ; 
    stu[23].insert("Himanshu") ;
    stu[23].insert("HarryPotter") ;  
    // auto iter = stu.begin() ;
    for(auto iter = stu.begin() ; iter != stu.end() ; iter++){
        cout<<iter->first<<" " ; 
        // auto i = iter->second ;
    for(auto i = iter->second.begin() ; i != iter->second.end() ; i++ ){
        cout<<*i<<" " ; 
    } 
    }  
    return 0 ; 
}