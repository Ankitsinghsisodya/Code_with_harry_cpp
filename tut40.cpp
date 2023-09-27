#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << "The roll-number is: " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void display_result();
};

void result ::display_result()
{
    get_roll_number();
    get_marks();
    cout << "Your percentage is " << (maths + physics) / 2.00 << "%" << endl;
}

int main()
{
    /*
    Notes:
        1. If we are inheriting B from A and C from B:[ A-->B-->C]
        2. A is the base class for B and B is the base class for C.
        3. A-->B-->C is called Inheritance Path
    */
    result ankit;
    ankit.set_roll_number(400);
    ankit.set_marks(97, 94);
    ankit.display_result();

    return 0;
}