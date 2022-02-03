#include<iostream>
using namespace std;
// OUTPUT IS CORRECT BUT THERE IS NO CHECKING OF TESTCASES ON GFG ACCORDING TO ME IT'S CORRCT
int main()
{
int arr[9]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
int low=0,high=8;
while(low<=high)
{
    if (arr[low]<0 && arr[high]<0)
    {
        low++;
        
    }
    else if (arr[low]>0 && arr[high]<0)
    {
        swap(arr[low],arr[high]);
        high--;
        low++;
    }
    else if (arr[low]>0 && arr[high]>0)
    {
        high--;
    }
    else if (arr[low]<0 && arr[high]>0)
    {
        low++;
        high--;
    } 
}
for (int i = 0; i < 9; i++)
{
    cout << arr[i] << " ";
}


return 0;
}