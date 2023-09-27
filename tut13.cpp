#include<iostream>
#include<array>
using namespace std;

int main(){
    //Array example
    int marks[4] = {23, 45, 56, 89};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<endl<<endl;

    int mathmarks[4];
    mathmarks[0]=22;
    mathmarks[1]=23;
    mathmarks[2]=24;
    mathmarks[3]=88;
        
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // mathmarks[2]=3;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks ["<<i<<"] = "<<marks[i]<<endl;
    // }
    // cout<<endl<<endl;
    
    // int i = 0;
    // while(i<4){
    //     cout<<"The value of marks ["<<i<<"] = "<<marks[i]<<endl;
    //     i++;
    // }

    cout<<endl<<endl;
int i = 0;
    do{
        cout<<"The value of marks ["<<i<<"] = "<<marks[i]<<endl;
        i++;
    }while(i<4);
   
    cout<<endl<<endl<<endl;
   //Pointers and arrays
   int* p = marks;
   cout<<*(p++)<<endl;
   cout<<*(++p)<<endl;
   cout<<*p<<endl;
   cout<<"The value of marks [0] is "<<*p<<endl;
   cout<<"The value of marks [1] is "<<*(p+1)<<endl;
   cout<<"The value of marks [2] is "<<*(p+2)<<endl;
   cout<<"The value of marks [3] is "<<*(p+3)<<endl;
    
    return 0;


}

