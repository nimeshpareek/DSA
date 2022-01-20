#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int arr[7]={40,80,10,90,30,50,70};
int l=0;
int i=l-1;
int h=6;
int key=70;
for (int j = 0; j < h-1; j++)
{
    if (arr[j]<key)
    {
        i++;
        swap(arr[j],arr[i]);
    }
    
}
swap(arr[i+1],arr[h]);

for (int i = 0; i < 6; i++)
{
 cout << arr[i] << " ";
}


return 0;
}