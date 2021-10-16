#include<bits/stdc++.h>
using namespace std ; 
// generate combination of all the parenthesis
//my solution correct till 4 number 
vector<string> parenthesis(int x){
    vector<string> v ; 
    if(x == 1){
        v.push_back("()") ; 
        return v ; 
    }
    const vector<string> &s = parenthesis(x - 1) ;
    for(string p:s){
        v.push_back("(" + p + ")") ; 
        v.push_back(p + "()") ;
        v.push_back("()" + p) ; 
    } 
    v.pop_back() ; 
    return v ; 

}
int main(){
    const vector<string> &vec = parenthesis(4) ;
    int count = 0 ; 
    for(auto i : vec){
        cout<<i<<"\n" ;
        count++ ;  
    }
    cout<<"the count of all the combinations is " << count<<"\n" ;
    
    return 0 ; 
}