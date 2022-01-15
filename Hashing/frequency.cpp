#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main()
{
int n;
cin >> n;
int arr[n];
// 10 12 10 15 10 20 12 12
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
for (int i = 0; i < n; i++)
{
    bool flag=false;
    for (int j = 0; j < i; j++)
    {
        if (arr[i]==arr[j])
        {
            flag=true;
            break;
        }
        
    }
    if (flag==false)
    {
        int count=0;
        for (int j = i; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
            
        }
        cout << "Count of " << arr[i] << " is: "  << count << endl;
        
    }
    
}


return 0;
}