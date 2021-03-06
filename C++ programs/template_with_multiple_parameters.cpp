/*
template<class T1, class T2>
class nameOfClass{
    //body
}
*/

#include<iostream>
using namespace std;

// template <class T1=int, class T2=float, class T3=char> template with a default datatype
template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a,T2 b){
            data1 = a;
            data2 = b;
        }
    void display(){
        cout<<"Data 1 = "<<this->data1<<"\nData2 = "<<this->data2;
    }
};

int main()
{
    // myClass<> obj(1, 'c'); use it like this if you are using default templates <> is necessary
    myClass<int, char> obj(1, 'c');
    obj.display();
    return 0 ;
}
