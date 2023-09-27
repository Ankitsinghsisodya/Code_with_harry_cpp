#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main (){
/*
    //connecting our file with hout stream
    ofstream hout("sample60.txt");

    //Creating a name string and filling it with the string entered by the user
    cout<<"Enter you name: ";
    string name;
    cin>>name;

    // Writing a string to the file
    hout<<"My name is: " + name;

    hout.close();
            */
    ifstream hin("sample60.txt");
    string content;
    hin>>ws>>content;

    getline(hin,content);


    cout<<"The content of this file is: "<<content<<endl;

    hin.close();
    return 0;
}





/*
    string s;

    ifstream in("sample60b.txt");
    in>>s;// Just like cin
    getline(in,s);
    cout<<s<<endl;

    cout<<endl<<endl;
    ofstream out("sample60.txt");
    
    out<<s;// Writes to sample60b.txt

*/