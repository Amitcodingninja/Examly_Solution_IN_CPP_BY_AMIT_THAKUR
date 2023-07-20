// You are using GCC

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    int len = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            len++;
        }
        else
        {
            ans += ((len * (len - 1)) / 2);
            len = 1;
        }
    }
    ans += ((len * (len - 1)) / 2);
    cout << ans + n << endl;
}