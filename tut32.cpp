#include<iostream>
using namespace std;  

class simple {
    int data1;
    int data2;
    int data3;
    public:
        simple(int a, int b = 9, int c =8){
            data1 =a;
            data2 = b;
            data3 = c;
        }
        void printdata();
};

    void simple :: printdata(){
        cout<<"The value of data is: "<<data1<<", "<<data2<<" and "<<data3<<endl;
    }

int main(){

    simple s(1,4);
    s.printdata();

    simple t(1);
    t.printdata();

    simple p(12,13,14);
    p.printdata();

    simple q(12,13);
    q.printdata();

    return 0;
}