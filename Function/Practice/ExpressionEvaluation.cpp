// You are using GCC

#include <iostream>
#include <cmath>
using namespace std;
int calculate(int x, int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + pow(x, i);
    }
    return sum;
}
int main()
{
    int x, n;
    // cout << "Enter the value of x\n";
    cin >> x;
    // cout << "Enter the value of n\n";
    cin >> n;
    // cout << "The result is" << endl;
    if (n == 0)
    {
        cout << "1" << endl;
    }
    else if (n > 0)
    {
        cout << calculate(x, n) << endl;
    }
    return 0;
}
