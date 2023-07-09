// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    while (1)
    {
        if (m % 2 == 0)
        {
            count++;
            m = m / 2;
        }
        else if (n % 2 == 0)
        {
            count++;
            n = n / 2;
        }
        else
            break;
    }
    if (count % 2 == 0)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}