#include<bits/stdc++.h>
using namespace std ; 
vector<vector<int>> powerset ; 
void subset_generation(vector<int> &subset , int i , vector<int> &nums){
    if (i == nums.size()){
        powerset.push_back(subset) ; 
        return ; 
    }
    subset_generation(subset , i+1 , nums);
    subset.push_back(nums[i]);
    subset_generation(subset , i+1 , nums);
    subset.pop_back() ; 
}
int main(){
    int n ;
    cin>>n ; 
    vector<int> vec ;  
    for(int i = 1 ; i <= n ; i++){
        vec.push_back(i) ; 
    }
    vector<int> empty ; 
    subset_generation(empty , 0 , vec) ; 
    for(auto element:powerset){
        for(auto ele:element){
            cout<<ele<<" " ; 
        }
        cout<<"\n" ;
    }

    return 0 ; 
}