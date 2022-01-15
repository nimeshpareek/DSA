#include<iostream>
using namespace std;
struct  myhash
{
    // THIS IS NOT COMPLETE I DIDN'T UNDERSTAND THIS 
    int *arr;
    int cap,size;
    myhash(int c)
    {
        cap=c;
        size=0;
        for (int i = 0; i < cap; i++)
        {
            arr[i]=-1;
        }
        int hash(int key)
        {
            return kay%cap;
        }
      
    }
};

int main()
{

return 0;
}