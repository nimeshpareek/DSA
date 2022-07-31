#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

void subsequences(vector<int> &v, int arr[], int s, int index, int size, int sum){
    if(index == size){
        if(s == sum){
            for(auto it: v){
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    v.push_back(arr[index]);
    s = s + arr[index];
    subsequences(v,arr,s,index+1,size,sum);
    s = s - arr[index];
    v.pop_back();
    subsequences(v,arr,s,index+1,size,sum);

}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int>v;
    subsequences(v,arr,0,0,3,sum);
return 0;
}