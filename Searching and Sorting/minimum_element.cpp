#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {2, 7, 3, 4, 1, 5};
    
    for (int i = 0; i < 5; i++)
    {
        int min = arr[i];
        for (int j = i+1; j < 6; j++)
        {

            if (arr[j] < min)
            {
                swap(arr[i], arr[j]);
                min=arr[i];
            }
        }
    }

    
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}