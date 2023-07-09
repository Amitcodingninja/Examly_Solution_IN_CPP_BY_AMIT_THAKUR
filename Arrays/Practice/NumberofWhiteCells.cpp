// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, sum = 0;
    cin >> n;
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 20)
                sum += a[i][j];
        }
    }
    cout << sum;
    return 0;
}