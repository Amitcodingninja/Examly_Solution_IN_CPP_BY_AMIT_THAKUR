#include <iostream>
using namespace std;
int main()
{
    int n, m, k, i, j, l, c = 0, cc = 0;
    cin >> n >> m >> k;
    int a[m], b[k];
    for (i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < k; i++)
    {
        cin >> b[i];
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (a[i] == b[j])
            {
                c++;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[j] == i)
            {
                break;
            }
            if (j == m - 1)
            {
                for (l = 0; l < k; l++)
                {
                    if (b[l] == i)
                    {
                        break;
                    }
                    if (l == k - 1)
                    {
                        cc++;
                    }
                }
            }
        }
    }
    cout << c << " " << cc;
    return 0;
}
