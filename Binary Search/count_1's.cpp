#include<iostream>
using namespace std;
int firstoccurence(int arr[], int n)
{
    int low=0;
int high=n-1;
while (low<=high)
{
    int mid=(low+high)/2;
    if (arr[mid] > 1)
    {
        high=mid-1;
    }
    else if (arr[mid] < 1)
    {
        low=mid+1;
    }
    else
    {
        if (arr[mid]==0 && arr[mid]!=arr[mid-1])
        {
            return mid;
        }
        else
        {
             high=mid-1;
        }
    }

}
}
int main()
{
int n;
cout << "Enter the number of elements: ";
cin >> n;
int arr[n];
cout << "Enter the elements: ";
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
int x = firstoccurence(arr, n);
int y;
y=n-x;
cout << y;



return 0;
}
