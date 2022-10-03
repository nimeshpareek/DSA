#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

bool check_sub(string s1, string s2){
    int n = s1.size();
    int m = s2.size();
    int s1_left = 0;
    int s2_left = 0;

    while (s1_left < n && s2_left < m)
    {
        if (s1[s1_left] == s2[s2_left])
        {
            s1_left++;
            s2_left++;
        }
        else
        {
            s1_left++;
        }   
    }
    if (s2_left == m)
    {
        return true;
    }
    return false;
}
int main()
{
string s1;
cin >> s1;

string s2;
cin >> s2;

cout << check_sub(s1,s2);
return 0;
}