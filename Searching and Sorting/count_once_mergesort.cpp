#include<iostream>
using namespace std;
int main()
{
int a[]={5,6,6,15};
int b[]={10,15,20};
for (int i = 0; i < 4; i++)
{
    for (int j = 0; i < 3; j++)
    {
        if (a[i]<b[j])
        {
            cout << a[i] <<" ";
            break;
            
        }
        else
        {
            if (a[i]>a[j])
            {
                cout << a[i];
            }
            
        }
        
    }
    
}

return 0;
}