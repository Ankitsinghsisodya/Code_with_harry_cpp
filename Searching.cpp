#include<iostream>
using namespace std;

int binarysearch(int arr[], int size,int k){
        int start = 0;
        int end = size;
        int middle = (start+end)/2;
        while(start<end){
        int middle = (start+end)/2;
        if(k == arr[middle]){
            return middle;        }
        if (k<arr[middle])
        {
            end = middle - 1;
        }
        if (k>arr[middle])
        {
            start = middle +1;
        }
}
    return -1;
}

int linearsearch(int arr[], int size, int k){
    for(int i = 0; i < size; i++){
        if(arr[i]==k){
            return i;
        }

    }
    return -1;
}

int main(){
    int arr[6] = {1,22,44,77,388,833};
    cout<<"The index of 77 is: "<<binarysearch(arr,6,77)<<endl;
    cout<<"The index of 77 is: "<<linearsearch(arr,6,77)<<endl;

    return 0;
}