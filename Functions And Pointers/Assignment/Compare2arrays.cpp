// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    bool same = true;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            same = false;
            break;
        }
    }
    if (same)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}