#include <iostream>
using namespace std;

class base
{
protected:
    int a;

private:
    int b;
};

/* For a protected member:
                            Public derivation           private derivation        Protected derivation

    1. Private members      Not Inherited               Not Inherited             Not Inherited 
    2. Protected members    Protected                   Private                   Protected      
    3. Public members       Public                      Private                   Proctected 

*/
class derived : public base
{
};

int main()
{
    base b;
    derived d;
    // cout<<d.a<<endl;  --> will not work since a is protected in both base as well as derived class
    return 0;
}