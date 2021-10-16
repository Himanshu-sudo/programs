#include<iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};
 // the function in class is defined here 
template <class T>
void Harry<T> :: display(){
    cout<<data;
}

// This function is overloaded using a template
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{
    // Harry<int> h(5.7);
    // cout << h.data << endl;
    // h.display();
    func(4.65) ; // Exact match takes the highest priority so int function will be called when used int
    return 0;
}
