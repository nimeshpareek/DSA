#include<iostream>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;

void palindrome(int start,int end, string x){
    
    if (start >= end)
    {
        cout << "Yes";
        exit(0);
    }
    if (x[start] == x[end])
    {
        palindrome(start+1,end-1,x);
    }
    else{
        cout << "No";
        exit(0);
    }
    
    
}
int main()
{
string x;
cin >> x;
int start = 0;
    int end = x.length();
    cout << "Your x is: " << end << endl;
palindrome(start,end-1,x);
return 0;
}