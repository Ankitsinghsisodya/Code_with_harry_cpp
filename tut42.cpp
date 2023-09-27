#include <iostream>
#include <cmath>
using namespace std;

/*
create 2 classes:
    1. simplecalulator --> Takes input of 2 numbers using a utiliry function
        and performs +, -, *, / and displays the result using another
        function
    2. scientific calculator --> Takes input of 2 numbers using a
        utility function and performs any four scientific operation of
        your choice and displays the results using another function.

        Create another class Hybridcalulator and inherit it using these 2 classes:
        Q1. What type of inheritance are you using?
        Q2. Which mode of inheritance are you using?
        Q3. Create an object of hybridcalulator and display reults of simple and
            scientific calculator.
        Q4. How is code reusability implemented?
*/
class scical
{
public:
    int a, b;

    void set_numbersci();
    void sqr();
    void sqert();
    void cube();
    void cubrt();
};

class calculator : public scical
{
public:
    void sum();
    void multiply();
    void sub();
    void utility();
    void division();
};

void calculator ::division()
{
    cout << "The divsion of " << a << " by " << b << " is: " << (a / b) << endl;
}

void calculator ::utility()
{
    char ch;
    cout << "Enter the function you require: ";
    cin >> ch;
    cout << endl
         << endl;
    if (ch == 'a')
    {
        calculator ::sum();
    }
    if (ch == 's')
    {
        calculator ::sub();
    }
    if (ch == 'm')
    {
        calculator ::multiply();
    }
    if (ch == 'd')
    {
        calculator ::division();
    }

    if (ch == 'q')
    {
        scical ::sqr();
    }
    if (ch == 'r')
    {
        scical ::sqert();
    }
    if (ch == 'c')
    {
        scical ::cube();
    }
    if (ch == 't')
    {
        scical ::cubrt();
    }
}

void calculator::sum()
{
    cout << "The sum of two number is: " << (a + b) << endl;
}
void calculator ::multiply()
{
    cout << "The product of two number is: " << (a * b) << endl;
}
void calculator ::sub()
{
    double d;
    d = (a - b);
    if ((a - b) < 0)
    {
        d = -(d);
    }
    cout << "The differnce of two number is: " << d << endl;
}

void scical ::sqr()
{
    cout << "The square of first number is: " << (a * a) << endl;
    cout << "The square of second number is: " << (b * b) << endl;
}

void scical ::sqert()
{
    cout << "The square root of first number is: " << sqrt(a) << endl;
    cout << "The square root of second number is: " << sqrt(b) << endl;
}
void scical ::cube()
{
    cout << "The cube of the first number is: " << (a * a * a) << endl;
    cout << "The cube of the second number is: " << (b * b * b) << endl;
}
void scical ::cubrt()
{
    int p = a;
    cout << "The cube root of the first number is: " << cbrt(a) << endl;
    cout << "The cube root of the second number is: " << cbrt(b) << endl;
}
void scical ::set_numbersci()
{
    int n1, n2;
    cout << "Enter the number : ";
    cin >> n1;
    cout << "Enter the number: ";
    cin >> n2;
    a = n1;
    b = n2;
}

class hybridcalculator : public calculator
{
};

int main()
{

    hybridcalculator saksham;
    saksham.set_numbersci();
    cout << endl
         << endl;

    cout << "Insert 'a for addition" << endl;
    cout << "Insert 'm' for multiplication" << endl;
    cout << "Insert 'd' for division" << endl;
    cout << "Insert 's' for subtraction" << endl;
    cout << "Inset 'q' for square" << endl;
    cout << "Inset 'r' for square root" << endl;
    cout << "Inset 'c' for cube" << endl;
    cout << "Inset 't' for cube root" << endl
         << endl
         << endl;
    saksham.utility();

    return 0;
}