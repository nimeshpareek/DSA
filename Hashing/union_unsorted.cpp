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
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (int j = 0; j < m; j++)
    {
        s.insert(b[j]);
    }
    cout << s.size();
    
return 0;
}