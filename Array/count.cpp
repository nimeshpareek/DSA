#include<iostream>
using namespace std;
int main()
{
int count=1;
int arr[5]={10,20,10,20,30};

for (int i = 1; i < 5; i++)
{
    for (int j = 0; j < i; j++)
    {
        if (arr[i]==arr[j])
        {
            count++;
        }
        
    }
    
}
cout << count;

return 0;
}