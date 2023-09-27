#include<iostream>
using namespace std;

int main(){

    //what is pointer
    //pointer is a data type which can store the address of  other data type
    int a = 3; 
    int *b;
    b = &a;
    // &-> (Address of) operator
    //*-> (value at) dereference operator
    cout<<"The address of a is-> "<<&a<<endl;
    cout<<"The address of a is -> "<<b<<endl;
    cout<<"The value of a is-> "<<*b<<endl;

    int **c= &b;

    cout<<"The address of b is-> "<<&b<<endl;
    cout<<"The address of b is-> "<<c<<endl;
    cout<<"The value at c is-> "<<*c<<endl;
    cout<<"The value at address value at (value at (c)) is-> "<<**c<<endl;
    

    return 0;
}