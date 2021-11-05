#include <iostream>
#include <string>
#include<typeinfo>
#include<chrono>

using namespace std;
int makeEqualLength(string &str1, string &str2)
{
    int len1 = str1.size();
	int len2 = str2.size();
	if (len1 < len2)
	{
		for (int i = 0 ; i < len2 - len1 ; i++)
			str1 = '0' + str1;
		return len2;
	}
	else if (len1 > len2)
	{
		for (int i = 0 ; i < len1 - len2 ; i++)
			str2 = '0' + str2;
	}
	return len1; // If len1 >= len2
}
string subtract(string lhs, string rhs) {
    int length = max(lhs.size(), rhs.size());
    int diff;
    string result;

    while (lhs.size() < length) 
      lhs.insert(0,"0");
            
    while (rhs.size() < length) 
      rhs.insert(0,"0");

    for (int i = length-1; i >= 0; i--) {
        diff = (lhs[i]-'0') - (rhs[i]-'0');
        if (diff >= 0)
            result.insert(0, to_string(diff));
        else {

            // borrow 
            int j = i - 1;
           
            while(lhs[j] == '0'){
                // cout<<"Entered loop"<<endl ; 
                lhs[j] = '9' ; 
                j-- ; 
            }
            
            lhs[j] = ((lhs[j] - '0') - 1) + '0'; 
            // cout<<lhs[j]<<endl ;
            result.insert(0, to_string(diff+10));
        }
      
    }

    // return result.erase(0, min(result.find_first_not_of('0'), result.size()-1));
    return result ; 
}

int main() {
    auto start = chrono::steady_clock::now() ;
    auto end = chrono::steady_clock::now() ;
    double elapsed_time_ns = double(chrono::duration_cast<chrono::nanoseconds>(end - start).count()) ; 
    cout<<"\nElapsed time(s):"<<elapsed_time_ns/1e9<<"\n" ;
    cout<<"type is " <<typeid((end - start).count()).name()<<endl ; 
}