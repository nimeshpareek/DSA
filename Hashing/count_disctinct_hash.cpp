#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int count_distinct(int arr[],int n)
{
  unordered_set< int > umap;
  for (int i = 0; i < n; i++)
  {
      umap.insert(arr[i]);
  }
  return umap.size();
  
}
int main()
{
int arr[5]={10,20,10,20,30};
int x=count_distinct(arr,5);
cout << x ;
return 0;
}