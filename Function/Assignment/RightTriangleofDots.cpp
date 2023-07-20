// You are using GCC

#include <iostream>
using namespace std;
string find(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        if (sum == n)
        {
            return "Yes";
        }
    }
    return "No";
}
int main()
{
    int n;
    cin >> n;
    cout << find(n) << endl;
    return 0;
}