// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
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
            if ((a[i][j] < 11) && (a[i][j] > 0))
            {
                if ((a[i + 2][j] < 11) && (a[i + 2][j] > 0) && (i < n - 2))
                {
                    a[i + 1][j] = 0;
                }
                if ((a[i][j + 2] < 11) && (a[i][j + 2] > 0) && (j < n - 2))
                {
                    a[i][j + 1] = 0;
                }
                if ((a[i - 1][j - 1] < 11) && (a[i - 1][j - 1] > 0) && (i > 0) && (j > 0))
                {
                    a[i - 1][j] = a[i][j - 1] = 0;
                }
                if ((a[i + 1][j - 1] < 11) && (a[i + 1][j - 1] > 0) && (i < n - 1) && (j > 0))
                {
                    a[i + 1][j] = a[i][j - 1] = 0;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
