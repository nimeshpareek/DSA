
#include <bits/stdc++.h>
#include <unordered_set>
#include <unordered_map>
using namespace std;

void reverse(int arr[], int left, int right)
{
    if (left == right) return;
    swap(arr[left], arr[right]);
    reverse(arr, left + 1, right - 1);
}
int main()
{
    int n;
    cout << "Enter size of the array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    reverse(arr, 0, n - 1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}