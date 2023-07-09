// You are using GCC

#include <iostream>
#include <cmath>
using namespace std;
int countWaysUtil(int x, int n, int num)
{
    int val = (x - pow(num, n));
    if (val == 0)
        return 1;
    if (val < 0)
        return 0;
    return countWaysUtil(val, n, num + 1) + countWaysUtil(x, n, num + 1);
}
int countWays(int x, int n) { return countWaysUtil(x, n, 1); }
int main()
{
    int x, n;
    cin >> x >> n;
    cout << countWays(x, n) << endl;
    return 0;
}