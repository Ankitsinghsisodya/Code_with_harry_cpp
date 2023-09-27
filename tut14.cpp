#include<iostream>
using namespace std;

    struct employee{
            
            int eid;
            char favchar;
            float salary;
    };    


     //typedef-> mean rather than typing stuct teacher use e(or any other thing it is written between
        // } and ;).....
    typedef struct teacher{
        int eid;
        char favchar;
        float salary;
    }e;

    union money{

        int rice;
        char car;
        float pounds;

    };
    
int main(){

    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;
    cout<<endl;
        Meal m1 = breakfast;
        cout<<(m1!=1)<<endl;

    cout<<endl<<endl;

        // union money m1;
        // m1.rice = 34;
        // cout<<m1.rice<<endl;
        // m1.car = 'c';
        // cout<<m1.rice<<endl;
        // cout<<m1.car<<endl;
        // cout<<m1.rice<<endl;
        // cout<<endl<<endl;


        // e ambuja;
        // ambuja.eid= 33;
        // ambuja.favchar = 'c';
        // ambuja.salary = 3333;

        // cout<<"Ambuja sir's salary-> "<<ambuja.salary<<endl;
        // cout<<endl;

        //     cout<<m1.car<<endl<<endl;

        // struct employee ankit;
        // ankit.eid = 1;
        // ankit.favchar = 'c';
        // ankit.salary = 12000;

        // cout<<"The employee id of Ankit is: "<<ankit.eid<<endl;
        // cout<<"The favorite character of Ankit is: "<<ankit.favchar<<endl;
        // cout<<"The salary of Ankit is: " <<ankit.salary<<endl;
    return 0;
}