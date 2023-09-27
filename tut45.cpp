#include <iostream>
using namespace std;
/*
    student --> test
    student --> sports
    sport ---> reult
    test --> result
*/
class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Your roll-number is: " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void print_marks()
    {
        cout << "You have obtained: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class sports : public virtual student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + maths;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};
int main()
{
    result ankit;
    ankit.set_number(4200);
    ankit.set_marks(97,94);
    ankit.set_score(4);
    ankit.display();
    return 0;
}