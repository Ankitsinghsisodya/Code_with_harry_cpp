#include <iostream>

using namespace std;

class c2;

class c1
{
    int val;

public:
    void intdata(int a)
    {
        val = a;
    }
    void display(void)
    {
        cout << val << endl;
    }
    friend void exchange(c1 &val, c2 &val2);
};

class c2
{
    int val2;

public:
    void intdata(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
    friend void exchange(c1 &val, c2 &val2);
};
/*
    Trickk to swap 2 numbers a & b:
    temp = a;
    a =b;
    b = temp;

*/
void exchange(c1 &x, c2 &y)
{
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.intdata(34);
    oc2.intdata(67);
    exchange(oc1, oc2);

    cout << "The value of c1 after exchanging becomes: ";
    oc1.display();
    cout << "The value of c2 after exchanging becomes: ";
    oc2.display();

    return 0;
}