#include <iostream>
using namespace std;

 // Derived Class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}

/* visibility mode can be public or private meaning : the base class public members will be
 public or private of the derived class members default is private*/
/*Visibility mode if
private : the public members of the base class becomes private members in derived class
public:   the public members of the base class becomes public members in derived class
*/
// {
//     class members/methods/etc...
// }


// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.2;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    cout<<"This is the id of harry "<<harry.id<<endl ; 
    return 0;
}
