#include <iostream>
using namespace std;

// Forward declaration
class complex;

class calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex o1, complex o2);
    int sumcompcomplex(complex o1, complex o2);
};

class complex
{
    int a, b;
    // Individually declaring functions as freinds
    // friend int calculator ::sumrealcomplex(complex o1, complex o2);
    // friend int calculator ::sumcompcomplex(complex o1, complex o2);

    //Aliter: Declaring the entire calculator as friend
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2, c3;
    c1.setNumber(1, 2);
    c2.setNumber(3, 8);
    calculator a, b;
    int s, t;
    s = a.sumrealcomplex(c1, c2);
    t = b.sumcompcomplex(c1, c2);

    c3.setNumber(s, t);
    c3.printNumber();
    return 0;

}