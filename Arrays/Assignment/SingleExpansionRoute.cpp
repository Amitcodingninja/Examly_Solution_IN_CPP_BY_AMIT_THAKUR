#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k = 0, s = 0;
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
            if ((a[i][j] < 11) && (a[i][j] > 1))
            {
                if ((i > 0) && (a[i - 1][j] == 20))
                {
                    k++;
                }
                if ((i < n - 1) && (a[i + 1][j] == 20))
                {
                    k++;
                }
                if ((j > 0) && (a[i][j - 1] == 20))
                {
                    k++;
                }
                if ((j < n - 1) && (a[i][j + 1] == 20))
                {
                    k++;
                }
            }
            if (k == 1)
            {
                cout << i + 1 << " " << j + 1 << "\n";
                s = 1;
            }
            k = 0;
        }
    }
    if (s == 0)
    {
        cout << "-1";
    }
    return 0;
}
