#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
        void getdata(){
            cout<<"The real part is "<< real <<endl;
            cout<< "The imaginary part is " <<imaginary <<endl;
        }
        void setdata(int a, int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    // complex c1;
    complex * ptr = new complex;
    int *arr = new int[3];
    // complex *ptr = &c1;
    // (*ptr).setdata(1,54); is exactly same as
    ptr->setdata(1,54);
    
    // (*ptr).getdata(); is as good as
    ptr->getdata();
    cout<<endl
        <<endl  
        <<endl;

    //Array of objects
    complex *ptr2 = new complex[3];
    ptr2->setdata(1,4);
    ptr2->getdata();

    cout<<endl
        <<endl  
        <<endl;
        
    (ptr2 + 1)->setdata(1,9);
    (ptr2 + 1)->getdata();

    return 0;
}