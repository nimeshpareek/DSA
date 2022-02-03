#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int count(int x){
    if (x == 0)
    {
        return 0;
    }
    return 1 + count(x/10);
    return 0;

}
int main()
{
    int x;
    cout << "Enter your digit: " << endl;
    cin >> x;

  

   int y = count(x);
   cout << y << endl;
// int x,y;
// cin >> x >> y;
// cout << x % y << endl;
// cout << x/y << endl;
return 0;
}