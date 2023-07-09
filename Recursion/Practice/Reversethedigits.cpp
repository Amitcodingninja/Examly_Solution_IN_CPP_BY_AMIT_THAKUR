// You are using GCC
#include <iostream>
using namespace std;
int reverse(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }
    return reverse(n / 10, rev * 10 + n % 10);
}
int main()
{
    int n;
    cin >> n;
    cout << reverse(n, 0) << endl;
    return 0;
}