// // #include<iostream>
// // #include<unordered_map>
// // #include<unordered_set>
// // using namespace std;
// // int main()
// // {
// // int n;
// // cin >> n;
// // int arr[n];
// // for (int i = 0; i < n; i++)
// // {
// //     cin >> arr[i];
// // }

// // int res=0;
// // for (int i = 0; i < n; i++)
// // {
// //     int count=0;
// //     for (int j = i; j < n; j++)
// //     {
// //         if (arr[i]==arr[j])
// //         {
// //             count++;
// //         }
     
        
// //     }
// //     if (count==1)
// //     {
// //         res++;
// //     }
    
    
// // }
// // cout << res;


// // return 0;
// // }

// #include<iostream>
// #include<unordered_map>
// #include<unordered_set>
// using namespace std;
// int main()
// {
// int n;
// cin >> n;
// int arr[n];
// for (int i = 0; i < n; i++)
// {
//     cin >> arr[i];
// }
// int count=0;
// for (int i = 0; i < n; i++)
// {
//     bool flag=false;
//     for (int j = 0; j < i; j++)
//     {
//         if (arr[i]==arr[j])
//         {
//             flag=true;
//             break;
//         }
        
//     }
//     if (flag==false)
//     {
//         count++;
//     }
    
// }
//     cout << count;


// return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int countdistinct(int arr[], int n)
{
    unordered_set<int> umap;
    for (int i = 0; i < n; i++)
    {
        umap.insert(arr[i]);
    }
    return umap.size();
    
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
int x = countdistinct(arr,n);
cout << x;
return 0;
}