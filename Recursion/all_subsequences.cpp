#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
// just try to draw the recursion tree of the following code and try to think like fibonacci series
// first = fib(n-1);
// last = fib(n-2);
// refer striver video 
void subsequences(vector<int> v, int n, int arr[], int index){
    if(index == n){
        for(auto it:v){
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    
    v.push_back(arr[index]);
    subsequences(v,n,arr,index+1);
    v.pop_back();
    subsequences(v,n,arr,index+1);

}
int main()
{
    int arr[] = {3, 2, 1};
    int n=3;
    int index = 0;
    vector<int> v;

    subsequences(v,n,arr,index);
return 0;
}