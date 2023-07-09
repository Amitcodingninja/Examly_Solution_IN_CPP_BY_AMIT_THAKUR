// You are using GCC

#include <iostream>
using namespace std;
int summation(int n, int m)
{
    if (m == 1)
    {
        return n * (n + 1) / 2;
    }
    return summation(summation(n, m - 1), 1);
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << summation(n, m) << endl;
    return 0;
}