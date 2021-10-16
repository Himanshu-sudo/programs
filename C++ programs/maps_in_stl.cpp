#include<iostream>
#include<map> // map is used to store key value pairs 
#include<string>
using namespace std;

int main(){
    map<string , int> marks ; 

    marks["himanshu"] = 98 ; 
    marks["Shubham"] = 90 ; 
    marks["prasad"] = 89 ; 

    map<string , int>::iterator iter ;  

    iter = marks.begin() ; 

    while(iter != marks.end()){
        cout<<(*iter).first<<" "<<(*iter).second<<'\n' ; 
        iter ++ ; 
    }
    return 0 ; 
}
// Time complexity to access and insert an element in map is O(logn)
