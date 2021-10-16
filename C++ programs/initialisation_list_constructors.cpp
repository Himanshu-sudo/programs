/*
JUST USED TO INITIALIZE THE VALUES IN CLASS NOTHING FANCY
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
#include<iostream>
using namespace std ;
class Test
{
    int a; /* Here 'a' is declared first and the variable that 
    is declared first is initialised first*/
    int b;

public:
    // Test(int i, int j) : b(j), a(i+b) ->
    /*This will create problem because 'a' will be initialised first
    'a' will give garbage value here*/
    // Test(int i, int j) : a(i), b(a + j)
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}

