#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a= 34;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is: "<<a<<endl;

    //Constant in C++
    const int a = 3;
    cout<<"The value of a was: "<<a<<endl;

     int x = 3, y = 78, z = 1233;
     cout<<"The value of x is: "<<x<<endl;
     cout<<"The value of y is: "<< y<<endl;
     cout<<"The value of z is: "<<z<<endl;
     cout<<endl<<endl;

    //Manipulator in C++
     cout<<"The value of x is: "<<setw(4)<<x<<endl;
     cout<<"The value of y is: "<<setw(4)<<y<<endl;
     cout<<"The value of z is: "<<setw(4)<<z<<endl;

    //Operator precedence 
     int p = 3,  q = 4;
    int r = ((((p*5)+q)-45)+87);
    cout<<r<<endl;

    return 0;
}

    
