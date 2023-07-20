// You are using GCC

#include <iostream>
using namespace std;
int findType(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum < n)
    {
        return 1;
    }
    else if (sum > n)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin >> n;
    int type = findType(n);
    if (type == 1)
    {
        cout << n << " is a deficient number";
    }
    else if (type == 0)
    {
        cout << n << " is a perfect number";
    }
    else
    {
        cout << n << " is an abundant number";
    }
    return 0;
}