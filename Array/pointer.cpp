#include<iostream>
using namespace std;
void increment (int *v , int *c)
{
 int x= *v + *c;
 int y= *v - *c;
 *v=x;
 *c=abs(y);
}
int main()
{
int a,b;
cin >> a >> b;
increment(&a,&b);
cout << a << endl;
cout << b << endl;
return 0;
}
