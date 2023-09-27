#include <iostream>
using namespace std;

/*
case 1:
class b: public a{
    // Order of execution of constructor --> first a() then b()
};
case 2:
class a; public b, public c{
    // Order of execution of constructor --> b() then c() and a()
};

case 3:
class a: public b, virtual public c{
    // Order of execution of constructor --> c() then b() and a()
};
*/

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base 1 class constructor called" << endl;
    }
    void printdata1()
    {
        cout << "The value of data1 is: " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base 2 class constructor called" << endl;
    }
    void printdata2()
    {
        cout << "The value of data2 is: " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base2(a), base1(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printdata()
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    derived d(1,2,3,4);
    d.printdata1();
    d.printdata2();
    d.printdata();


    return 0;
}