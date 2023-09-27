#include<iostream>
using namespace std;

int factorial(int n){
    int ans=1;
    while(n>=1){
        ans= ans * n;
     n = n - 1;

}
return ans;
}

int ftr(int n){
    if(n<=1){
        return 1;
    }
    return n * ftr(n-1);
}

int fib(int n){
    if(n<3){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main(){

    // int p;
    // cout<<"Enter the number whose factorial you require: ";
    // cin>>p;
    //     int a = ftr(p);

    // cout<<"Factorial of "<<p<<" is: ";
    // cout <<a<<endl;

    int n;
    cout<<"Enter the nth term term-> ";
    cin>>n;
    cout<<"The fibbonaci term is-> "<<fib(n);
}


// #include<iostream>
// using namespace std;
//  int main(){


//  }