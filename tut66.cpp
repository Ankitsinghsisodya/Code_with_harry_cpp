#include<iostream>
using namespace std;

template<class T1 = int, class T2 = float, class T3 = char >
class ankit{
    public:
        T1 a;
        T2 b;
        T3 c;
        ankit(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};

int main(){

    ankit<> a(1,2,'c');
    a.display();

    ankit<float,char,char>y(1.6,'o','c');
    cout<<endl<<endl;
    y.display();
    char ch = 'c';


    return 0;
}