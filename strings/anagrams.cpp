#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;
// I don't know how this count array is working over here, but will ask someone
// one more way of doing this in ologn is sort the both strings ans compare
int main()
{
const int CHAR = 256;
string s1,s2;
cin >> s1 >> s2;

if (s1.size() != s2.size())
    cout << "NO" << endl;

int count[CHAR] = {0};

for (int i = 0; i < s1.size(); i++)
{
    count[s1[i]]++;
    count[s2[i]]--;
}

for (int i = 0; i < CHAR; i++)
{
    if (count[i]!=0)
    {
        cout << "NO" << endl;
    }    
}
cout << "YES" << endl;  


return 0;
}