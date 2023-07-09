// You are using GCC

#include <iostream>
using namespace std;
int lastNonZeroDigit(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
        while (result % 10 == 0)
        {
            result /= 10;
        }
        result %= 100000;
    }
    return result % 10;
}
int main()
{
    int n;
    cin >> n;
    cout << lastNonZeroDigit(n) << endl;
    return 0;
}