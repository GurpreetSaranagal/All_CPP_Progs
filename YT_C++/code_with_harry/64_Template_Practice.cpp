#include<iostream>

using namespace std;
class vector{
    
    int size;
    public:
        int* arr;
        vector(int m){
            size = m;
            arr = new int[size];
        }
        vector dotProduct(vector &v){
            int d = 0;
            for(int i =0; i < size; i++){
                d+= this->arr[i] + v.arr[i];
            }
                return d;
        }
};

int main()
{
    vector v1(3);
    v1.arr[0] =  8;
    v1.arr[1] = 4;
    v1.arr[2] = 32;
    vector v2(3);
    v2.arr[0] = 2;
    v2.arr[1] = 3;
    v2.arr[2] = 4;
    int a = v1.dotProduct(v2);
    cout<<a;
    return 0;
}