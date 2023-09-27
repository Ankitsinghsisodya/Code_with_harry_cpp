#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"This is me"<<endl<<"I am great"<<endl;
    out<<"This is me also";
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample60b.txt");
    // getline(in,st);

    // cout<<st;


    while(in.eof() == 0){
        getline(in,st);
        cout<<st<<endl;
    }
    
            // eof ---> END OF FILE


    return 0;
}