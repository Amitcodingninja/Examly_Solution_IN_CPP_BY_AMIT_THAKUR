// You are using GCC

#include <iostream>
#include <cmath>
using namespace std;
int minimumTiles(int n, int m)
{
    if (n == 0 || m == 0)
        return 0;
    int size = pow(2, (int)log2(min(n, m)));
    return 1 + minimumTiles(n - size, size) + minimumTiles(n, m - size);
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << minimumTiles(n, m) << endl;
    return 0;
}