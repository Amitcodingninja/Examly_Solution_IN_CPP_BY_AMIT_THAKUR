// You are using GCC

#include <iostream>
using namespace std;
int triangle(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + triangle(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << triangle(n) << endl;
    return 0;
}