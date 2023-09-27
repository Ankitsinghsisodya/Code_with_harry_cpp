#include<iostream>
#include<cstring>
using  namespace std;

class cwh{
    protected:
        string title;
        float rating;
    public:
        cwh(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display() = 0;  // do-nothing function --> pure virtual function

};

class cwhvideo : public cwh{
    float videolength;
    public:
        cwhvideo(string s, float r, float vl):cwh(s,r){
            videolength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videolength<<" minutes"<<endl;
        }
};
class cwhtext : public cwh{
    int words;
    public:
        cwhtext(string s, float r, int wc):cwh(s,r){
            words = wc;
        }
        void display(){
                cout<<"This is an amazing text tutorial with title "<<title<<endl;
                cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
                cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
        }
};

int main(){

    string title;
    float rating, vlen;
    int words;

    // for code with Harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    cwhvideo djvideo(title,rating,vlen);
    // djvideo.display();

    // for code with harry text
    title = "Django tutorial text";
    words = 433;
    rating =  4.19;
    cwhtext djtext(title, rating, words);
    // djtext.display();

    cwh* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    cout<<endl<<endl;
    tuts[1]->display();


    return 0;
}
/*
//Rules for virtual functions
1. They cannot be static.
2. They are accessed by object pointers.
3. Virtual funcions can be a friend of another class.
4. A virtual function in base class might not be used.
5. A virtual function defined in the base class, there is  no necessity
   of redefining it in the derived class.
*/