#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function objects(Functor): Function wrapped in a class so that it is availabe like an object
    int arr[] = {1,73,4,2,54,7};
    // sort(arr, arr+5);
    sort(arr, arr+6, greater<int>());
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}