#include<iostream>
//Thee are two types of heaader files
//1. System generated hydrafiles: s comes with the compiler.
//2. User defined header files: It is written by programmers.
// #include "this.h" -> This will produce error if this.h is 
// not present in the current directory
using namespace std;
 
 int main(){
 int a,b;
 cin>>a>>b;

    cout<<"This is Hello World/n";
    //arithmetic operators
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<endl<<endl;


    //Assignment operator
    //int a = 2, b= 3;
    //char d = 'd';
    
    cout<<"Following are the types of comparison in c++" <<endl;
    //Comparison operator
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;

   //Logical operators
   cout<<"Following are the logical operators in C++"<<endl;
   cout<<"The value of ((a==b)&&(a<b))logical operator is "<<((a==b) && (a<b))<< endl;
   cout<<"The value of ((a==b)||(a<b))logical operator is "<<((a==b) || (a<b))<< endl;
   cout<<"The value of (!(a==b))logical operator is "<<(!(a==b))<< endl;

    return 0;
 }

 
 