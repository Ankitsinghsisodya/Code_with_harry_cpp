#include<iostream>
using namespace std;

int factorial(int n ){
    if(n==1){
        return 1;
    }
    return n * factorial(n-1);
}
//Function prototype
//type function-name (arguments);
int sum(int , int b);

void g();

int main(){

    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"The sum of both number is: "<<sum(num1,num2)<<endl;
    g();
    return 0;
}

int sum(int a, int b){
    // Formal parameters a & b will be taking values from actual parameters num1 and num2
    return (a+b);
}

void g(){
    cout<<"\nHello, Good morning";
}