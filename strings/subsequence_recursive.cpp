#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

bool check_sub(string &s1, string &s2, int n, int m){
    if (m == 0)
    {
        return true;
    }
    
    if (n == 0)
    {
        return false;
    }

    if (s1[n-1] == s2[m-1])
    {
        return check_sub(s1,s2,n-1,m-1);
    }
    else
    {
        return check_sub(s1,s2,n-1,m);
    }
    
    return false;
    
}
int main()
{
string s1;
cin >> s1;

string s2;
cin >> s2;
int n = s1.size();
int m = s2.size();

cout << check_sub(s1,s2,n,m);
return 0;
}