#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

void print(int n){
   if (n == 0)
   {
       return;
   }
   print(n - 1);
   cout << n << " ";
   
}
int main()
{
int n;
cout << "Enter the no: ";
cin >> n;
print(n);
return 0;
}