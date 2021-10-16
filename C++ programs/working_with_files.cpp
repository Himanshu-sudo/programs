/*
These are some useful classes for working with files in C++

fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "Himanshu bhai";
    // Opening files using constructor and writing it
    ofstream out("sample60.txt");// Write operation
    /*out.open("sample60.txt") ;   This can be also used*/
    out<<st;

    // string st2;
    // // Opening files using constructor and reading it
    // ifstream in("sample60b.txt"); // Read operation
    // in>>st2;
    // getline(in, st2);  
    // cout<<st2;

    /*If you want to work with files you have to open it there are two ways to open a file 
    1. Using a constructor or using member function open() of a class*/



    // // giving output the string lines by storing in st until the file reaches the end of it
    // while (in.eof()==0) 
    // {
    //     // using getline to fill the whole line in st
    //     getline(in,st);
    //     cout<<st<<endl;
    // }

    return 0;
}

