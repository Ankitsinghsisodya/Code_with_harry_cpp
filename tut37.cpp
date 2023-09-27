#include <iostream>
using namespace std;

// Base class
class employee
{
public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    employee() {}
};

// Derived class syntax
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/ methods / etc...
}
Note:
1. Default visibility mode is private.
2. Public visibility mode: Public memebers of the base class public members of
   the derived class
3. Private visibility mode: public members of the base class becomes private
   members of the derived class.
4. Private members are never inherited.
*/

// Creating a Programmer class derived from employee base class

class programmer : public employee
{
public:
     int languagecode;
    programmer(int e)
    {
        id = e;
     languagecode = 9;
    }
        void getdata(){
            cout<<id<<endl;
        }
};

int main()
{
    employee ankit(1), ayush(2);
    cout << ankit.salary << endl;
    cout << ayush.salary << endl;

    programmer skillF(1);
    cout << skillF.languagecode<<endl;
    skillF.getdata();
    cout<<skillF.id<<endl;
    return 0;
}
