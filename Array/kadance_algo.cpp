#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main()
{
int n;
cin >> n;
int arr[n];

for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
int csum = arr[0];
int osum = arr[0];
for (int i = 1; i < n; i++)
{
    if (csum >= 0)
    {
        csum = csum + arr[i];
    }
    else 
    {
        csum = arr[i];
    }  
    if (csum > osum)
    {
        osum =  csum;
    }
    
}
cout << osum << endl;


return 0;
}