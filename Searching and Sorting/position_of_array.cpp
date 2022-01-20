#include<iostream> // DONE
using namespace std;
int main()
{
int arr[]={3,8,6,12,10,7};
int key=7;
int count=0;
int j=0;
int newarr[6];
for (int i = 0; i < 6; i++)
{
    /* code */
    if(arr[i]<=key)
    {
        newarr[j]=arr[i];
        j++;
        
    }
}
for (int i = 0; i < 6; i++)
{
    /* code */
    
    if(arr[i]>key)
    {
        newarr[j]=arr[i];
        j++;
        
    }
}
for (int j = 0; j < 6; j++)
{
    cout << newarr[j] <<"  ";
}


return 0;
}