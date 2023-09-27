#include <iostream>
using namespace std;
int glo = 6;
void sum()
{
   int a;
   cout << glo << endl;
}
int main()
{
   int glo = 9;
   glo = 78;
   sum();
   // int a = 4;
   // int b= 5;
   int a = 4, b = 5;
   cout << "Ths is tutorial 4" << endl
        << " Here the value of a is " << a << endl
        << ". The calue of b is " << b;
   cout << endl;
   float pi = 3.14;
   char c = 'u';
   cout << "The calue of pi is: " << pi << endl;
   cout << "The calue of c is: " << c << endl;
   cout << glo << endl;
   bool i = true;
   cout << i;

   return 0;
}