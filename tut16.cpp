#include<iostream>
using namespace std;

int sum(int a , int b){
    return (a+b);
}

//This will not swap a & b
void swap(int a, int b){
    int temp = a;
    a = b;
    b= temp;
    
}

//call by refernce using pointers
void swapointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Call by refernce using C++ refernce variables
int & swapreferencevari(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main(){
    int a = 4, b = 5;

   cout<<"The sum of 4 and 5 is: "<<sum(a,b)<<endl;
   cout<<"The value of a is: "<<a<<endl;
   cout<<"The value of b is: "<<b<<endl;
    swap(a,b);// This will not swap a & b
    //swapointer(&a,&b);// This will swap a & b using pointer refernce
    swapreferencevari(a,b) = 766;// This will swap using a and b using refernce variables
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of b is: "<<b<<endl;
    return 0;
}
