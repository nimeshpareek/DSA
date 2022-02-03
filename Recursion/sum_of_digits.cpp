#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int function(int n){
    // int x = n%10;
    // int y = n/10;
    if(n==0)
    return 0;

    return n%10+ function(n/10);
   
}
int main()
{
int n;
cin >> n;
cout << function(n);
return 0;
}