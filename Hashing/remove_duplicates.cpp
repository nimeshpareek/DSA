// #include<iostream>
// #include<unordered_map>
// #include<vector>
// #include<unordered_set>
// using namespace std;

// vector<int> removeduplicate(int* a, int size)
// {
//     vector<int> p;
//     unordered_map<int,bool> umap;
//     for (int i = 0 ; i < size; i++)
//     {
//         if (umap.count(a[i]) > 0)
//         {
//             continue;
//         }
//         umap[a[i]]=true;
//         p.push_back(a[i]);
        
//     }
//     return p;
    
// }
// int main()
// {
//     int a[]={1,2,3,3,2,1,4,3,6,5,5};
//    vector <int > output =  removeduplicate(a,11);

//    for (int i = 0; i < output.size(); i++)
//    {
//        cout << output[i] << " ";
//    }
   

// return 0;
// }

#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;

vector<int> removedupli(int* arr , int n)
{
    unordered_map
}

int main()
{
    int n;
    cin >> n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
vector<int> output = removedupli(arr,n);
return 0;
}