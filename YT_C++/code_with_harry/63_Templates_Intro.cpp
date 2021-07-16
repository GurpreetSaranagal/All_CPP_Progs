/*
templates
    class --> objects
    templates --> class{tempates <--> parameterized classes}

class Vector{
    int* arr;
    int size;
    Public:
}
vecInt <> vecFloat <> vecDouble <> vecChar
tempates <--> parameterized classes
why use templates ?
DRY --< Donot Repeat Yourself
Generic programming
syntax for Templates

<<< Competitive Programming >>>[  STL  ] --> header file
template<class T>           T can be int, float, char, etc
// Represents MANY CLASS
class Vector{
    T* arr;
    Public:
        Vector(T* arr){
            ...
        }
        // and many other methods

};

int main(){
    vector <int> myvec(ptr);
    vector <float> myFvec(ptr);

}

*/