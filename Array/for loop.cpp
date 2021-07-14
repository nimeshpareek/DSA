
// C++ program to demonstrate array of strings using
// 2D character array
#include <iostream>
using namespace std;
 
int main()
{
    // Initialize array of pointer
    int a,b,i;
    cin >> a >> b;
    const char *represent[9] = {"one","two","three","four","five","six","seven","eight","nine"};
    // Printing Strings stored in 2D array
    for (int i = a; i <= b; i++)
        if(i<10)
        {
            cout << represent[i-1] << endl;
        }
        else if(i>9 && i%2==0 )
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
 
    return 0;
}