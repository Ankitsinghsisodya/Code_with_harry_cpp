#include<iostream>
using namespace std;

// SYNTAX FOR INHERITING IN MULTIPLE INHERITANCE
/*
class derived: visibility-mode base1, visibility-mode base2
{
    class body of class "Derived"
};
*/

class base1{
    protected:
        int base1int;
    public:
        void set_base1int(int m){
                base1int = m;
        }
};
class base2{
    protected:
        int base2int;
    public:
        void set_base2int(int m){
            base2int = m;
        }
};
class base3{
    protected:
        int base3int;
    public:
        void set_base3int(int m){
            base3int = m;
        }
};

class derived : public base1, public base2, public base3{
    public:
        void show(){
            cout<<"The value of base1 is: "<<base1int<<endl;
            cout<<"The value of base2 is: "<<base2int<<endl;
            cout<<"The value of base3 is: "<<base3int<<endl;
            cout<<"The sum of these value is: "<<(base1int +base2int + base3int)<<endl;
        }
};
/*
The inherited derived class will look something like this:
Data members:
    base1int --> protected
    base2int --> protected

Members function:
    set_base1int() --> public
    set_base2int() --> public
    show() --> public


*/
int main(){

    derived d;
    d.set_base1int(1);
    d.set_base2int(23);
    d.set_base3int(25);
    d.show();

    return 0;
}