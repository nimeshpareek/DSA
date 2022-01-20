#include<iostream>
using namespace std;
int main()
{
int arr[8]={5,3,8,4,2,7,1,10};
int l=0,h=7;
int pivot=5;
int i=l-1,j=h+1;
while (true)
{
    do
{
    i++;
} while (arr[i]<pivot);
do
{
    j--;
} while (arr[j]>pivot);
if (i>=j)
{
    for (int i = 0; i < 8; i++) //  in function we can use return here;
    {
        cout << arr[i] << " ";
    }
    
    exit(0);
}
swap(arr[i],arr[j]);
}

return 0;
}