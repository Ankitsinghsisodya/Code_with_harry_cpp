#include<iostream>
#include<climits>
#include<array>
using namespace std;

int main(){

    int arr[8] = {1,9,33,77,22,11,0,-1};
    
    for(int i = 0; i < 8; i++){
        if(arr[i+1]<arr[i]){
            swap(arr[i],arr[i+1]);
        }

    }
    for(int i = 0; i< 8; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}