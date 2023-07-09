// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int n, i, j = 0, k, l, m = 0;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        j = j + a[i];
    }
    k = j / n;
    l = j - (k * n);
    for (i = 0; i < n; i++)
    {
        if (a[i] < k)
        {
            a[i] = 0;
        }
        else
        {
            a[i] = a[i] - k;
        }
        m = m + a[i];
    }
    m = m - l;
    cout << l << " " << m;
    return 0;
}