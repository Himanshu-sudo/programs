#include<iostream>
#include<stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
using namespace std;


int makeEqualLength(string &a , string &b){
  int length = max(a.size() , b.size()) ;
  while(a.size() < length){
    a.insert(0 , "0") ; 
  } 
  while(b.size() < length){
    b.insert(0 , "0") ; 
  }
  return length ; 
}

string addBitStrings( string first, string second )
{
	string result; 

	int length = makeEqualLength(first, second);
	int carry = 0; // Initialize carry

	for (int i = length-1 ; i >= 0 ; i--)
	{
		int firstBit = first[i] - '0';
		int secondBit = second[i] - '0';

		int sum = (firstBit ^ secondBit ^ carry)+'0';

		result = (char)sum + result;

		carry = (firstBit&secondBit) | (secondBit&carry) | (firstBit&carry);
	}

	if (carry) result = '1' + result;

	return result;
}

long int multiply(string X, string Y)
{
	
	int n = makeEqualLength(X, Y);

	
	if (n == 0) return 0;
	if (n == 1) return (X[0] - '0')*(Y[0] - '0');

	int fh = n/2; 
	int sh = (n-fh); 

	
	string Xl = X.substr(0, fh);
	string Xr = X.substr(fh, sh);

	
	string Yl = Y.substr(0, fh);
	string Yr = Y.substr(fh, sh);

	
	long int P1 = multiply(Xl, Yl);
	long int P2 = multiply(Xr, Yr);
	long int P3 = multiply(addBitStrings(Xl, Xr), addBitStrings(Yl, Yr));

	
	return P1*(1<<(2*sh)) + (P3 - P1 - P2)*(1<<sh) + P2;
}

int main()
{
    cout<<multiply("11100", "10010")<<endl ; 
	
}
