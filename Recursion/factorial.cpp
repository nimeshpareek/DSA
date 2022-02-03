#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int factorial(int n){
    if (n == 1)
    {
        return 1;
    }
    int ans = n * factorial(n-1);
    return ans;
    
}
int main()
{
int n;
cin >> n;
int x = factorial(n);

cout << x ;
return 0;
}