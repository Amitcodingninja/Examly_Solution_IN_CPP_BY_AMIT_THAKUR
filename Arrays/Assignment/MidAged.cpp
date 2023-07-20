// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int r, c, i, j, age, count = 0;
    cin >> r;
    int a[r][r];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            if (i == j)
            {
                if (a[i][j] >= 18 && a[i][j] <= 60)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
}
