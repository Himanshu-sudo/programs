#include<iostream>
using namespace std;
class A{
    int a;
    public:
        A& setData(int a){
            this->a = a;
    // this is a pointer which points to the object which is being created or which 
    // invokes the member function
            return *this ; 
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A a;
    a.setData(4).getData();
    // a.getData();
    return 0;
}
// this is a pointer
// class A{
//     int a;
//     public:
//          A & setData(int a){
//             this->a = a;
//             return *this;
//         }

//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//         }
// };

// int main(){
//     A a;
//     a.setData(4).getData();
//     return 0;
// }