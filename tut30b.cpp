#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x, y;
    public:
        point(int a,int b){
            x = a;
            y = b;
        }

        void displaypoint(){
            cout<<"The point is ("<<x<<","<<y<<")"<<endl;
        }
         friend void distance(point p, point q);
};
//create a function which takes 2 point objects and computes the distance between those

void  distance(point p, point q){
        cout<<"Distance between the two points is: "<<sqrt(pow((p.x-q.x),2) + pow((p.y - q.y),2));
}
int main(){

    point p(0,0);
    p.displaypoint();


    point q = point(3,4);
    q.displaypoint();

     distance(p,q);

    return 0;
}