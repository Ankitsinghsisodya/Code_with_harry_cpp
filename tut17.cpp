#include<iostream>
using namespace std;

inline int product(int a, int b){
    //Don't use static variables with inline function
   
    return (a*b);
}
int preduct(int a, int b){
    static int c = 0;//This executes only once
    c+=1;// Next time this function is run, the value of c will be retained
    return a*b+c;
}

//The argument which we have to keep default should be written last in argument
float moneyreceived(int currentmoney, double factor=1.04){
    return currentmoney*factor;
}

int strlen(const char *p){
    
}
int main(){

cout<<endl<<endl;
    // int a, b;
    // cout<<"Enter the value of a & b ";
    // cin>>a>>b;
    // cout<<"The product of a & b is: "<<product(a,b)<<endl;
    // cout<<"The product of a & b is: "<<product(a,b)<<endl;
    // cout<<"The product of a & b is: "<<product(a,b)<<endl;
    // cout<<"The product of a & b is: "<<product(a,b)<<endl;
    int money = 1000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyreceived(money)
    << "Rs after 1 year";
    cout<<endl<<endl;

    cout<<"For VIP: If you have "<<money<<"Rs in your bank account, you will receive "<<
    moneyreceived(money,1.1) << "Rs after 1 year";
    cout<<endl<<endl;
    return 0;
}