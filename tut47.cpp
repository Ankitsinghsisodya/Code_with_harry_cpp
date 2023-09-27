#include <iostream>
#include<cmath>
using namespace std;

class simplecalculator
{
    int a, b;

public:
    void getdatasimple()
    {
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
    }
    void performoperationsimple()
    {
        cout << "The value of a+b is: " << a + b << endl;
        cout << "The value of a-b is: " << a - b << endl;
        cout << "The value of a*b is: " << a * b << endl;
        cout << "The value of a/b is: " << a / b << endl;
    }
};

class scientificcalculator
{   int a, b;
    public:
        void getdatascientific(){
            cout<<"Enter the value of a: ";
            cin>>a;
            cout<<"Enter the value of b: ";
            cin>>b;
        }
        void performopertaionscientific(){
            cout<<"The value of cos(a) is: "<<cos(a)<<endl;
            cout<<"The value of sin(a) is: "<<sin(a)<<endl;
            cout<<"The value of  a^b is: "<<pow(a,b)<<endl;
            cout<<"The value of exp(a) is: "<<exp(a)<<endl;
            cout<<"The value of tan(a) is: "<<tan(a)<<endl;
        }
};


class hybridcalculator: public simplecalculator, public scientificcalculator{

};
int main()
{
    // simplecalculator calc;
    // calc.getdata();
    // calc.performoperation();

    hybridcalculator calc;
    calc.getdatascientific();
    cout<<endl
        <<endl;
    calc.performopertaionscientific();
    cout<<endl
        <<endl;
    calc.getdatasimple();
    cout<<endl
        <<endl;
    calc.performoperationsimple();
   

    return 0;
}