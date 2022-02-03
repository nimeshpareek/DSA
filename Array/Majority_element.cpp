// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
        
    int res=0;
    int count=1;
    for(int i=1;i<size;i++)
    {
        
        if(a[i]==a[res])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            res=i;
            count=1;
        }
    }
    count=0;
    for(int i=0;i<size;i++)
    if(a[res]==a[i])
    count++;
if(count<=size/2)
res=-1;
return res;
    
}

// { Driver Code Starts.

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}
  // } Driver Code Ends
// } Driver Code Ends

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[7] = {8, 8, 6, 6, 6, 6, 6};

//     int res = 0;
//     for (int i = 1; i < 7; i++)
//     {
//         int count = 1;
//         if (arr[i] == arr[res])
//         {
//             count++;
//         }
//         else
//         {
//             count--;
//         }
//         if (count == 0)
//         {
//             res = i;
//             count=1;
//         }
//     }
//     int count = 0;
//     for (int i = 0; i < 7; i++)
//     {
//         if (arr[res] == arr[i])
//         {
//             count++;
//         }
//     }
//     if(count>8/2)
//     {
//         cout << arr[res];
//     }

//     return 0;
// }