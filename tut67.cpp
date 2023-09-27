#include<iostream>
using namespace std;

// float funcAverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
// float funcAverage2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
template <class T>
void swapi(T &a, T &b){
    T temp = a;
     a = b;
      b = temp;
}
template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}
int main(){

    float a;
     a = funcAverage(5,2);
     printf("The average of these number is  %.3f",a);

    cout<<endl;

    int x = 5;
    int y = 7;
    swapi(x, y);
    cout<<x<<endl<<y<<endl;
    return 0;
}