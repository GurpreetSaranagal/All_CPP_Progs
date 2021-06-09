#include<iostream>
using namespace std;
int lenear_search(int arr[] , int n, int key)
{
    for(int i=0; i < n; i++)
    {
        if(arr[i] == key)
        return i + 1;
    }
    return -1;
}
int main()
{
    int n,key;
    cin >> n;
     
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    cin >> key;

    cout << lenear_search(arr, n, key) << endl;
    return 0;
}