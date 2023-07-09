#include <iostream>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    if (n < m)
        n = n + k;
    else
        m = m + k;
    if (n > m)
        k = n - m;
    else
        k = m - n;
    cout << k;
    return 0;
}