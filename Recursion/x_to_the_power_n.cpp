#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int power(int x,int y){
    if (y == 1)
    {
        return y;
    }

    return x * power(x,y-1);
    
}
int main()
{
int x,y;
cout << "Enter the NUmber: ";
cin >> x;

cout << "Enter the power: "; 
cin >> y;

int z = power(x,y+1);
cout << z;
return 0;
}