#include<iostream>
using namespace std;

int c = 45;

int main(){
    int c = 5;
    cout<<"The value of c is "<<c;
    // This ::c is scope resolution operator which derives the global value of varibale
    cout<<endl<<"The global c is "<<::c<<endl;
    
    //float and long double thorugh (f,F) & (l,L)
    float d  = 34.4f;
    long double e = 34.4l;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<endl<<endl;

    cout<<"The calue of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    
    // Reference variable
    float x = 455;
    float &y = x;
    // &y ----> m percent y
    cout<<x<<endl;
    cout<<y<<endl;

    int a = 45;
     float b = 45.46;
     cout<<"The value of a is "<<(float)a<<endl;
     cout<<"The value of a is "<<float(a)<<endl;
cout<<endl;
     cout<<"The value of b is "<<(int)b<<endl;
     cout<<"The value of b is "<<int (b)<<endl;
     int f = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int (b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;

    char ch = 'a';
    cout<<"The integer value related to a is: "<<(int)ch<<endl;

    return 0;
}