#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<"Element "<<" "<< v.at(i)<<" "<<v[i]<<"\n";
    }
    cout<<endl;
}
int main(){ 
    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    // display(vec1);   
    vector<int> :: iterator iter = vec1.begin() ; 
    // vec1.insert(iter + 1,3, 566) ; // inserts to the second location of our vector 
    // 3 copies of 566 will be inserted in vector 2 from location 2
    // vector<int> c(3,6) ; 
    cout<<"-------------------\n" ; 
    while(iter != vec1.end()){
        cout<<*iter<<endl ;
        iter++ ;  
    }

    // display(c) ; 
    return 0;
}
