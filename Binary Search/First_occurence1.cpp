
#include<iostream>
using namespace std;
int main()
{
    cout << "Enter Total number: " << endl;
int numberofarr;
cin >> numberofarr;
int arr[numberofarr];

cout << "Enter numbers: ";
for (int i = 0; i < numberofarr; i++)
{
    cin >> arr[i];
}
cout << "Enter number to be searched in array: ";
int searchednumber;
cin >> searchednumber;

int low=0,high=numberofarr-1;
while (low<=high)
{
    int mid=(low+high)/2;
   if (searchednumber > arr[mid])
   {
       low=mid+1;
   }
   else if(searchednumber < arr[mid])
   {
       high=mid-1;
   }
   else
   {
       if (arr[mid]==searchednumber && arr[mid]!=arr[mid-1])
       {
           cout << mid;
           exit(0);
       }
       else
       {
           high=mid-1;
       }
   }
   
}
return 0;
}