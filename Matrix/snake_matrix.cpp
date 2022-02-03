#include <iostream>
using namespace std;
int main()
{
    int arr[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }



    for (int i = 0; i < 4; i++)
    {

        if (i%2==0)
        {
            for (int j = 0; j < 4; j++)
                cout << arr[i][j];
        }

        else
        {
            for (int j = 4-1; j >= 0; j--)

                cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}