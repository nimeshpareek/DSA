#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int fib(int n){
  if (n==0)
  {
      return 0;
  }
  if (n==1)
  {
      return 1;
  }
  return fib(n-1) + fib(n-2);
  
  
}
int main()
{
    int n;
    cin >>n;
cout << fib(n) << endl;
return 0;
}