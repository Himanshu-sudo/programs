#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        int sample = 54 ; 
        int okay = 45 ;
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *ptr = new Complex;
    ptr->setData(1, 54);
    ptr->getData(); 

    // Array of Objects
    Complex *ptr1 = new Complex[4]; 
    ptr1->setData(1, 4); 
    ptr1->getData();

    (ptr1+1)->setData(2, 12); 
    (ptr1+1)->getData();

    // (ptr1[1])->setData(1, 4); This is giving error 
    // Complex obj ; 
    // cout<<obj.sample<<'\n' ; 
    // cout<<obj.okay<<'\n' ; 

    // Complex* pt ; 
    // pt = &obj ; 
    // cout<<(*pt).sample<<'\n' ; 
    return 0;
}
