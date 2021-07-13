#include<iostream>
using namespace std;
class CWH
{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void dislay(){}
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
            cout<<"This is an amazing video with title "<<title<<end;
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

    return 0;
}