// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        
        int sum=0;
        int total_sum=n*(n+1)/2;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                arr[0]=arr[i];
                break;
                
            }
            sum = sum+arr[i];
            
        }
        total_sum=total_sum-sum;
        arr[1]=total_sum;
        return arr;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code End