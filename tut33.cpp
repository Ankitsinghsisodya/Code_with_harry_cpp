#include <iostream>
using namespace std;

class deposit
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    deposit() {}
    deposit(int p, int y, float r); // r can be a value like 0.04
    deposit(int p, int y, int r);   // r can be a value like 14
     void printreturnvalue();
};

deposit::deposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
deposit ::deposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = r/100.00;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + (interestrate));
    }
}
    void deposit:: printreturnvalue(){
        cout<<endl;
        cout<<"The principal amount was: "<<principal<<endl;
        cout<<"The total years for it was invested: "<<years<<endl;
        cout<<"The rate of interest was: "<<interestrate<<endl;
        cout<<"The return value is: "<<returnvalue<<endl<<endl;
    }

int main()
{
    deposit d1, d2, d3;
    int p, y;
    float r;
    int R;

    // d3.printreturnvalue();
    
    cout<<"Enter the principal amount: ";
    cin>>p;
    cout<<"Enter the years for it is invested: ";
    cin>>y;
    cout<<"Enter the interest rate: ";
    cin>>r;

     d1 = deposit(p,y,r);
    d1.printreturnvalue();


    cout<<"Enter the principal amount: ";
    cin>>p;
    cout<<"Enter the years for it is invested: ";
    cin>>y;
    cout<<"Enter the interest rate: ";
    cin>>R;

    d2 = deposit(p,y,R);
    d2.printreturnvalue();


    return 0;
}

