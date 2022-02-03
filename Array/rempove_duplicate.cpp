// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// NOT WORKING PROPERLY FOR 
// 42
// //1 3 4 5 6 12 13 17 19 22 23 25 27 28 35 36 37 39 43 46 48 54 59 62 63 65 68 70 72 79 82 83 92 93 95 96 100
 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
     
     int temp[n],i;
     temp[0]=a[0];
        int res=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[res-1])
            {
                temp[res]=a[i];
                res++;
            }
        }
        for(int  i=0;i<n;i++)
        {
            a[i]=temp[i];
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}  // } Driver Code Ends

//1 3 4 5 6 12 13 17 19 22 23 25 27 28 35 36 37 39 43 46 48 54 59 62 63 65 68 68 70 70 72 79 82 83 92 92 93 95 96 96 100
//1 3 4 5 6 12 13 17 19 22 23 25 27 28 35 36 37 39 43 46 48 54 59 62 63 65 68 70 72 79 82 83 92 93 95 96 100