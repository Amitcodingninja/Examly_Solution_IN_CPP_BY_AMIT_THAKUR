// You are using GCC

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int area = -1;
    for (int i = n - 1; i >= 3; i--)
    {
        if (arr[i] == arr[i - 1] && arr[i - 2] == arr[i - 3])
        {
            area = arr[i] * arr[i - 2];
            break;
        }
    }
    cout << area << endl;
    return 0;
}