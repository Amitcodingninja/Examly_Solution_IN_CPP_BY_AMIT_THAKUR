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
            if ((a[i - 1][j] == 1) && (i > 0))
            {
                a[i][j] = 0;
            }
            if ((a[i + 1][j] == 1) && (i < n - 1))
            {
                a[i][j] = 0;
            }
            if ((a[i][j - 1] == 1) && (j > 0))
            {
                a[i][j] = 0;
            }
            if ((a[i][j + 1] == 1) && (j < n - 1))
            {
                a[i][j] = 0;
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
