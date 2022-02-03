#include<iostream>
using namespace std;
int main()
{
    int arr[6]={10,20};
    cout << sizeof(arr)/sizeof(arr[0]);
    return 0;
}