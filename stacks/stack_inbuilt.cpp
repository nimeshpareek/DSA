#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<stack>
using namespace std;
int main()
{
    cout << "dcdscds" ;
stack<int> s;


s.push(10);
cout << s.top() << endl;
s.push(20);
cout << s.top() << endl;
s.push(30);
cout << s.top() << endl;
s.push(40);
cout << s.top() << endl;
s.push(50);
cout << s.top() << endl;
s.push(60);
cout << s.top() << endl;
s.pop();
cout << s.top() << endl;

cout << s.size() << endl;
cout << s.empty() << endl;
return 0;
}