#include<iostream>
#include<map>
#include<string>
using namespace std;

//Map is an associative array
int main(){

    map<string,int> marksmap;
    marksmap["Ankit singh sisodya"] = 99;
    marksmap["Harry is great"] = 2;
    marksmap["Ayush sisodya"] = 59;
    marksmap.insert({{"sumit",88},{"ayushi",75}});

    map<string,int>::iterator it;
    for(it = marksmap.begin(); it != marksmap.end(); it++){
        cout<<(*it).first<<" -> "<<(*it).second<<endl;
    }

    cout<<"The size is: "<<marksmap.size()<<endl;
    cout<<"The size is: "<<marksmap.max_size()<<endl;
    cout<<"The size is: "<<marksmap.empty()<<endl;
    
    return 0;
}