#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector <T> &v){


     
        cout<<"Displaying this vector"<<endl;
    for(int i= 0; i < v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl<<endl;
}
int main(){
    // Ways to create a vector
    vector<int>vec1;//zero lenth vector
    vector<int>vec2(4);//4-element character vector
    // vec2.push_back(4);
    // display(vec2);
    // vector<char>vec3(vec2);// 4 - element character vector from vec2
    vector<int>v(6,3);// 6-element vector of 3's
    display(v);

    // int element, size = 5;
    // cout<<"Enter the number of elements you require: ";
    // cin>>size;
    // for(int i = 0; i < size; i++){
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
        
    // }
    // vec1.pop_back();
    // display(vec1);
    // vector<int>::iterator iter = vec1.begin() ;
    // // vec1.insert(iter,500,566);
    // vec1.erase(iter+1,iter+4);
    // display(vec1);
 
    vector<int>vec4(4,13);
    display(vec4);
    cout<<endl;
    cout<<vec4.size();
    return 0;
}
