#include <iostream>
using namespace std;

class base1
{

public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class derived : public base1, public base2
{
    int a;
    public:
    void greet(){
        base2:: greet();
    }
};

class b{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class d: public b{
    int a;
    // d's new say method will override base class's say() method
    public:
        void say(){
            cout<<"Hello world my rich people"<<endl;
        }

};
int main()
{
    // Ambiguity  1
   /*
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    cout << endl
         << endl;
    derived d;
    d.greet();
    */

   // Ambiguity 2
   b a;
   a.say();

   d i;
   i.say();


    return 0;
}