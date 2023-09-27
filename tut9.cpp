#include<iostream>
using namespace std;
 
 int main(){

    int age;
    cout<<"Tell me your age ";
    cin>>age;
     
        // if((age<18) && (age > 0)){
        //     cout<<"You cannot come to my party"<<endl;
        // }
        //     else if(age==18){
        //         cout<<"You are a kid and you will get a kid pass to the party"<<endl;
        //     }
        //     else if (age <=0){
        //         cout<<"You are not borned"<<endl;
        //     }
        //         else{
        //             cout<<"You can come to the party"<<endl;
        //         }

                //Selection contro structure-->Switch case statement 

                    switch (age)
                    {
                    case 18:
                        cout<<"You are 18"<<endl;
                        break;
                    case 22:
                        cout<<"You are 22"<<endl;
                        break;
                    case 2:
                        cout<<"You are 2"<<endl;
                        break;
                    
                    default:
                    cout<<"No specail cases"<<endl;
                        break;
                    }
                    cout<<"Done with switch case"<<endl;
    return 0;
 }