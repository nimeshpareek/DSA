// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{

    //  FAILED IN GFG TEST CASES
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
         int sum1=0;
        int sum2=0;
        int j=1;
        int i=0;
        

        while (i<n)
        {
           sum1 = sum1 + arr[i];
           i=i+2;  
        }
        while (j<n)
        {
            sum2= sum2 + arr[j];
            j=j+2;
        }
        
        if(sum1>=sum2)
        {
            return sum1;
        }
        else
        {
            return sum2;
        }
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends