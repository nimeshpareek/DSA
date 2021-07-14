#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void display(vector<int> &v)
{
   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i] << " ";
      //  cout << v.at(i) << " "; We can also use this in place of v[i]
     
   }
    cout << endl;
}
   
   int main()
   {
      vector<int> v1;
      int element, size;
      cin >> size; //  we can also run the vector like as we do in test cases in contest
      for (int i = 0; i < size; i++)
      {
         cin >> element;
         v1.push_back(element); //phle element scan hus fir wo vector mai chla gya
      }
      sort(v1.begin(),v1.end());
      display(v1);
      return 0;
   }