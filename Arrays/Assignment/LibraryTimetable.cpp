#include <iostream>
using namespace std;
int main()
{
    int n, i, j = 0, k = 0;
    cin >> n;
    int a[n], b[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (i = 0; i < n; i++)
    {
        if ((a[i] - j) >= b[i])
        {
            k++;
        }
        j = a[i];
    }
    cout << k;
    return 0;
}
