#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
unordered_set<int>s;
s.insert(10);
s.insert(5);
s.insert(15);
s.insert(20);
cout << s.size() << " ";
s.erase(15);
cout << s.size() << " ";
auto it=s.find(10);
s.erase(it);
cout << s.size()  << " ";

// WE CAN ALSO USE THIS ONE BUT THIS WILL ERASE EVERYTHING ANS THE OUTPUT WILL BE ZERO
// s.erase(s.begin(),s.end());

cout << endl;

for (int x: s)
{
cout << x << " ";
}

return 0;
}