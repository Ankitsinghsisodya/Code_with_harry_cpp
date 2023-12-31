#include <iostream>
#include <string>
using namespace std;

class binary
{
    private:
    string s;

public:
    void read(void);
    private:
    void chk_bin(void);
    public:
    void ones_complement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number ";
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_complement(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    // OOPs - Classes and objects

    //  C++ --> initially called --> C with classes by stroustroup
    // class  --> extension of structures (in C)
    // structures had limitations
    // --> members are public
    // --> No methods
    // classes = structures + more
    // classes = can have methods and properties
    // classes --> can make few members as private & few as public
    // structures in C++ are typedef
    // you can declare objects along with class declaration like this
    /*
       class Employee{
        //class definition

       }harry,rohan,lovish;

    */
    // harry.salary = 8 makes no sense if salay is private

    // Nesting of member functions

    binary b;
    b.read();
    // b.chk_bin();
    cout << "Before one's compliment the number is:" << endl;
    b.display();
    b.ones_complement();
    cout << "After one's compliment the number is: " << endl;
    b.display();

    return 0;
}