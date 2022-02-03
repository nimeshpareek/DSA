#include<iostream>
using namespace std;

int function(int n,int a, int b, int c){
  if (n == 0)
  {
      return 0;
  }
  if (n < 0)
  {
      return -1;
  }
  int x = max(function(n-a,a,b,c),function(n-b,a,b,c),function(n-c,a,b,c));
  if (x == -1)
  {
      return -1;
  }
    return x+1;
  
  
}
int main()
{
int n,a,b,c;
cin >> n >> a >> b >> c;
function(n,a,b,c);
return 0;
}