// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int r, c, i, j, x, y, n, m, s = 0, dir = 1, direction = 1;
    cin >> r >> c;
    char gnd[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> gnd[i][j];
        }
    }
    cin >> x >> y >> n;
    char path[n];
    for (i = 0; i < n; i++)
    {
        cin >> path[i];
    }
    for (direction = 1; direction < 5; direction++)
    {
        dir = direction;
        i = x;
        j = y;
        for (m = 0; m < n; m++)
        {
            if (dir == 1)
            {
                switch (path[m])
                {
                case 'F':
                    if (i > 0)
                    {
                        i--;
                    }
                    else
                    {
                        s = -1;
                    };
                    break;
                case 'L':
                    dir = 4;
                    break;
                case 'R':
                    dir = 2;
                    break;
                }
            }
            else if (dir == 2) // East
            {
                switch (path[m])
                {
                case ('F'):
                    (j < c - 1) ? j++ : (s = -1);
                    break;
                case ('L'):
                    dir = 1;
                    break;
                case ('R'):
                    dir = 3;
                    break;
                }
            }
            else if (dir == 4) // West
            {
                switch (path[m])
                {
                case ('F'):
                    (j > 0) ? j-- : (s = -1);
                    break;
                case ('L'):
                    dir = 3;
                    break;
                case ('R'):
                    dir = 1;
                    break;
                }
            }
            else if (dir == 3) // South
            {
                switch (path[m])
                {
                case ('F'):
                    (i < r - 1) ? i++ : (s = -1);
                    break;
                case ('L'):
                    dir = 2;
                    break;
                case ('R'):
                    dir = 4;
                    break;
                }
            }
            if ((gnd[i][j] == 'X') || (s == -1))
            {
                s = -1;
                break;
            }
        }
        if (s == 0)
        {
            gnd[i][j] = 'o';
        }
        s = 0;
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (gnd[i][j] == 'o')
            {
                cout << i << " " << j << "\n";
            }
        }
    }
    return 0;
}
