#include<iostream>
using namespace std;

int main(){
    /* Loops in C++
        1. For loop
        2. While loop
        3. do-while loop
        */

       /*For loop in C++*/

       /*for(intialization; condition; updation){
        loop body(C++ body);
       }*/

        for ( int i =1; i<=40; i++){
            cout<<i<<" ";
        }
            cout<<endl<<endl;
            int i = 1;

            /*While loop*/
        // while(i<=40){
        //     cout<<i<<" ";
        //     i++;
        // }
     
        do{
            cout<<i<<" ";
            i++;
        }
        while(false);
        cout<<endl;
        i = 1;
        
        do{
            int j;
            j = (i * 6);
            cout<<j<<" ";
            i++;
            
        }
        while(i<=10);
    

    cout<<endl<<endl<<endl;
        
        for(int i = 0; 1<33; i++){
            cout<<i<<" ";
        }
       return 0;
}