#include <iostream>
using namespace std;
int findValue(int x, int m);

int main()
{
    int x, m;
    cin >> x;
    cin >> m;
    cout << findValue(x, m);
    return 0;
}

int findValue(int x, int m)
{
    int i, j;
    for (i = 1; i < 100000; i++)
    {
        j = (m * i) + 1;
        if (j % x == 0)
        {
            break;
        }
    }
    if (j % x == 0)
    {
        return j / x;
    }
    else
        return -1;
}
