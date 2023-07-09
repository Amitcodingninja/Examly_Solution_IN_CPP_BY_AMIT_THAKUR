// You are using GCC

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << 'b';
        }
        if (i == 0)
        {
            for (int j = 0; j < 2 * n - 1; j++)
            {
                cout << '*';
            }
        }
        else
        {
            cout << '*';
            for (int j = 0; j < 2 * (n - i - 1) - 1; j++)
            {
                cout << 'i';
            }
            if (i != n - 1)
            {
                cout << '*';
            }
        }
        for (int j = 0; j < i; j++)
        {
            cout << 'b';
        }
        cout << endl;
    }
    return 0;
}