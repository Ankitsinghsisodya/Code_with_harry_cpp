#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int x, int y);
    void printNumber(void){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(int x, int y)// ---> This is parameterized constructor as 
// it takes two   parameters
{
    a = x; 
    b = y;
}

int main(){
    //Implicit call
    complex a(4,6);

    //Explicit call
    complex b = complex(5,7);

    a.printNumber();
    b.printNumber();

    return 0;
}