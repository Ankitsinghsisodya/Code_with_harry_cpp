#include<iostream>
using namespace std;

template<class T>
class ankit{
    public:
        T data;
    ankit(T a){
        data = a;
    }
    void display();
};
    template <class T>
    void  ankit<T>:: display(){
        cout<<data<<endl;
    }
    
    void func(int a){
        cout<<"I am first func()"<<a<<endl;
    }

    template<class T>
    void func(T a){
        cout<<"This is templatised func() "<<a<<endl;
    }
    template<class T>
    void func1(T a){
        cout<<"This is templatised func1() "<<a<<endl;
    }
    

int main(){

    // // ankit<float>a(3.7);
    // // ankit<char>a('c');
    // ankit<int>a(88);
    // cout<<a.data<<endl;
    // a.display();

    func(4);// --> Exact match takes the highest priority
    func1(1);
    return 0;
}


