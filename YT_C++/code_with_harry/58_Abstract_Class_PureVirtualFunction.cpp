#include<iostream>
using namespace std;
class CWH // this is an abstract base class because it contain one pure virtual function
{          // this class is essentially designed to be inherited by other classes 
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display() = 0;// do-nothing function --> pure virtual functions
        // this makes the function mandatory to be defined in the derived class or it generates an error
};
class CWHVideo: public CWH
{
    float videolength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s,r)
        {
            videolength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title <<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videolength<<" minutes"<<endl;
        }    
};
class CWHText: public CWH 
{
    int words;
    public:
        CWHText(string s, float r, float wc): CWH(s,r){
            words = wc;
        }
        void display(){
            cout<<"This is an amazing tutorial with title "<<title<<endl;
            cout<<"Rating of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
            cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
        }
};
int main()
{
     string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}