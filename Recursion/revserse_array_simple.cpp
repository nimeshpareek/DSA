#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

void reverse(int arr[], int n){
    if(n<0){
        return;
    }
    cout << arr[n];
    reverse(arr,n-1);
    

}
int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n; 
    
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    reverse(arr, n-1);
return 0;
}