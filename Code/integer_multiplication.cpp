#include <iostream>
#include <string>
#include<chrono>
#define max(a,b) ((a) > (b) ? (a) : (b))

using namespace std;

int make_equal(string &a , string &b){
  int length = max(a.size() , b.size()) ;
  while(a.size() < length){
    a.insert(0 , "0") ; 
  } 
  while(b.size() < length){
    b.insert(0 , "0") ; 
  }
  return length ; 
}

string add(string a, string b) {
    int length = make_equal(a , b) ; 
    int carry = 0;
    int sum_col;  // sum of two digits in the same column
    string result;

    // build result string from right to left
    for (int i = length-1; i >= 0; i--) {
      sum_col = (a[i]-'0') + (b[i]-'0') + carry;
      carry = sum_col/10;
      result.insert(0,to_string(sum_col % 10));
    }
    
    if (carry)
      result.insert(0,to_string(carry));
    
    
    return result;
}

string subtract(string a, string b) {
    int length = make_equal(a , b) ;
    int diff;
    string result;

    for (int i = length-1; i >= 0; i--) {
        diff = (a[i]-'0') - (b[i]-'0');
        if (diff >= 0)
            result.insert(0, to_string(diff));
        else {

            // borrow 
            int j = i - 1;
           
            while(a[j] == '0'){
                // cout<<"Entered loop"<<endl ; 
                a[j] = '9' ; 
                j-- ; 
            }
            
            a[j] = ((a[j] - '0') - 1) + '0'; 
            // cout<<lhs[j]<<endl ;
            result.insert(0, to_string(diff+10));
        }
      
    }

    // return result.erase(0, min(result.find_first_not_of('0'), result.size()-1));
    return result ; 
}

string longmultiply(string num1, string num2) {
    int length = make_equal(num1 , num2) ;
    
    if (length == 1)
        return to_string((num1[0]-'0')*(num2[0]-'0'));

  int first_half = length/2 ; 
  int second_half = length - first_half ; 
    string A1 = num1.substr(0 , first_half);
    string A2 = num1.substr(first_half , second_half);
    string B1 = num2.substr(0 , first_half);
    string B2 = num2.substr(first_half , second_half);
    
    string p = longmultiply(A1 , B1);
    string q = longmultiply(A2 , B2);
    string r = longmultiply(add(A1 , A2),add(B1 , B2));
    string s = subtract(r , add(p , q));

    for (int i = 0; i < 2*second_half; i++)
        p.append("0");
    for (int i = 0; i < second_half; i++)
        s.append("0");
        
    string result = add(add(p,q),s);

  // Strip the leading 0's
    return result.erase(0, min(result.find_first_not_of('0'), result.size()-1));
   
}

int main() {
    string s1 , s2 ; 
    // int no ; 
    // cin>>no ; 
    // int length = no/2 ;
    // for(int i = 0 ; i < length ; i++){
    //   s1.append(to_string(rand() % 10)) ; 
    //   s2.append(to_string(rand() % 10)) ; 
    // }
    // cout<<s1<<endl ; 
    // cout<<s2<<endl ;
    // auto start = chrono::steady_clock::now() ; 
    // longmultiply(s1 , s2) ; 
    // auto end = chrono::steady_clock::now() ;
    // double elapsed_time_ns = double(chrono::duration_cast<chrono::nanoseconds>(end - start).count()) ; 
    // cout<<"\nElapsed time(s):"<<elapsed_time_ns/1e9<<"\n" ;
    // string s1, s2;
    cin >> s1 >> s2;
    cout<<longmultiply(s1 , s2)<<endl ; 
    return 0;
}