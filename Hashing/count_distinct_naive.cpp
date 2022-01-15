#include<iostream>
using namespace std;
int main()
{
 //   SOME MISTAKE IN CODE NEED TO BE REVIEWED
int arr[5]={10,20,10,20,30};
int n=5;
int count=0;
int res=0;
for (int i = 0; i < n; i++)
{
    for (int j = i; j < n; j++)
    {
        if (arr[i]==arr[j])
        {
            count++;
        }
        
    }
    if (count == 1)
    {
        res++;
    }
  
}
cout << res;

return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     // THIS CODE WILL NOT COUNT LAST ELEMENT SO I HAVE SET RES=1 BCZZ TO COUNT +1 EXTRA ELEMENT
//     int res=1;
// int arr[5]={10,20,10,20,30};
// int n=5;
// for (int i = 0; i < n-1; i++)
// {
//     bool flag=false;

//     for (int j = i+1; j < n; j++)
//     {
//         if (arr[i]==arr[j])
//         {
//             flag=true;
//             break;
//         }
        
//     }
//     if (flag==false)
//     {
       
//         res++;
//     }
    
// }
// cout << res;
// return 0;
// }