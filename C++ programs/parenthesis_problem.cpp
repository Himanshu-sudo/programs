#include<bits/stdc++.h>
using namespace std ;
//correct solution that I learned
vector<string> combinations ; 
void generate(string &s , int open , int close){
    if(open == 0 && close == 0){
        combinations.push_back(s) ;
        return ;
    }

    if (open > 0){
        s.push_back('(') ;
        generate(s , open - 1 , close) ; 
        s.pop_back();
    }

    if(close > 0){
        if(open < close){
            s.push_back(')') ; 
            generate(s , open , close - 1) ; 
            s.pop_back() ; 
        }
    }
}
int main(){
    string s = "";
    int n ; 
    int count = 0 ; 
    cin>>n ;
    generate(s , n , n) ; 
    for (auto it : combinations){
        cout<<it<<endl ;
        count++ ;  
    } 
    cout<<count<<"\n" ; 
    return 0 ; 
}