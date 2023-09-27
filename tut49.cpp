#include <iostream>
using namespace std;

/*
    Syntax for initializatioin list in constructor:
    constructor(argument):initialization-section{
        assignment + other code; 
    }

    class test{
        inta;
        int b;
        public: 
            test(int i, int j):a(i),b(j){
                constuctor-body
            }
    };

*/
class test{
    int a;
    int b;
    public:
        // test(int i, int j):a(i),b(j)
        // test(int i, int j):a(i),b(i+j)
        // test(int i, int j):a(i),b(2*j)
        // test(int i, int j):a(i),b(j+a)
        // test(int i, int j):b(j),a(i+b)---> Red flag this will create problems because a will be 
        // intialized first
        test(int i, int j):a(i)
        {
            b = j;
            cout<<"Constructor executed"<<endl;
            cout<< "value of a is: "<<a<<endl;
            cout<< "value of b is: "<<b<<endl;
        }
};
int main()
{
    test t(4,6);

    return 0;
}