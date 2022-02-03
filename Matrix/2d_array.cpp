#include<iostream>
using namespace std;
int main()
{
 const int m=3;
 const int n=2;
 int arr[m][n];
 for (int i = 0; i < m; i++)
 {
     for(int j=0; j<n; j++)
     {
         cin >> arr[i][j];
     }
 }

 for (int i = 0; i < m; i++)
 {
     for(int j=0; j<n; j++)
     {
         
         cout << arr[i][j] << " ";
     }
     cout  << endl;
 }
 
return 0;
}