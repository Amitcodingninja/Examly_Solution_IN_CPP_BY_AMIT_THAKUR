#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 10; i <= a; i++)
    {
        int x = 80 * i + 50 * (i - 10);
        if (a - x >= 0 && a - x < 130)
        {
            cout << "Number of weekday hours is " << i << "\n"
                 << "Number of weekend hours is " << (i - 10);
        }
    }
    return 0;
}