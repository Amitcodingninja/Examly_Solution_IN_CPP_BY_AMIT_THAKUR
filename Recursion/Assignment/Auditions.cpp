// You are using GCC

#include <iostream>
using namespace std;
int selection(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return 2 * selection(n / 2);
}
int main()
{
    int n;

    cin >> n;
    cout << selection(n) << endl;
    return 0;
}