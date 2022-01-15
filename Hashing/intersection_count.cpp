// #include <iostream>
// #include <unordered_map>
// #include <unordered_set>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int a[n], b[m];
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }
//     //
//     for (int i = 0; i < n; i++)
//     {
//         bool flag = false;
//         for (int j = 0; j < i; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if (flag == true)
//         {
//             continue;
//         }
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i] == b[j])
//             {
//                 count++;
//                 break;
//             }
//         }
//     }
//     cout << count;

//     return 0;
// }

#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main()
{
int n, m;
    cin >> n >> m;
    int a[n], b[m];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    unordered_set<int> umap;
    for (int i = 0; i < n; i++)
    {
        umap.insert(a[i]);
    }
    for (int j = 0; j < m; j++)
    {
        if (umap.find(b[j])!=umap.end())
        {
        count++;
        umap.erase(b[j]);
        }
        
    }
    cout << count;
    
return 0;
}